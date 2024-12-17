#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, end;
};

bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

int maxActivities(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compare);

    int count = 1;
    int lastEndTime = activities[0].end;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].start >= lastEndTime) {
            count++;
            lastEndTime = activities[i].end;
        }
    }

    return count;
}

int main() {
    vector<Activity> activities = {{1, 3}, {2, 5}, {4, 6}, {7, 8}, {5, 7}};
    
    cout << "Maximum number of activities: " << maxActivities(activities) << endl;

    return 0;
}
