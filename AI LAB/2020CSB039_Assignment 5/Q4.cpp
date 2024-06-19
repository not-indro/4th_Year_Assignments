#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the minimum time required for a group to cross the river
int minCrossingTime(vector<int>& times, vector<pair<int, int>>& solution) {
    sort(times.begin(), times.end());
    int n = times.size();
    if (n <= 2) {
        solution.push_back({times.back(), -1}); // If there are 2 or fewer people, return the time of the slowest person
        return times.back();
    }
    int minTime = 0;
    while (n > 3) {
        // Send the two fastest people across
        int fastestTime = times[0] + times[1];
        int slowestTime = times[1];
        minTime += fastestTime;
        solution.push_back({times[0], times[1]});
        times.erase(times.begin());
        times.erase(times.begin());
        // Bring back the fastest person
        minTime += slowestTime;
        solution.push_back({-1, slowestTime});
        times.push_back(slowestTime);
        sort(times.begin(), times.end());
        n -= 2;
    }
    if (n == 3) {
        minTime += times[0] + times[1] + times[2]; // If there are 3 people left, send them all across together
        solution.push_back({times[0], times[1]});
        solution.push_back({times[0], -1});
        solution.push_back({times[0], times[2]});
    } else if (n == 2) {
        minTime += times[1]; // If there are 2 people left, send them across together
        solution.push_back({times[0], times[1]});
    } else {
        minTime += times[0]; // If there is only 1 person left, send them across
    }
    return minTime;
}

// Function to check if the family can be transported within the time constraint
bool canTransportFamily(vector<int>& times, int timeConstraint, vector<pair<int, int>>& solution) {
    return minCrossingTime(times, solution) <= timeConstraint;
}

int main() {
    vector<int> familyTimes = {1, 3, 6, 8, 12}; // Travel times for each family member
    int timeConstraint = 30; // Time constraint in seconds

    vector<pair<int, int>> solution;
    if (canTransportFamily(familyTimes, timeConstraint, solution)) {
        cout << "The family can be safely transported across the river within the time constraint." << endl;
        cout << "Solution:" << endl;
        for (const auto& step : solution) {
            if (step.first != -1) cout << "Person " << step.first << " crosses the river." << endl;
            if (step.second != -1) cout << "Person " << step.second << " crosses the river." << endl;
            cout << "Boat returns." << endl;
        }
    } else {
        cout << "It's not possible to transport the family across the river within the time constraint." << endl;
    }

    return 0;
}
