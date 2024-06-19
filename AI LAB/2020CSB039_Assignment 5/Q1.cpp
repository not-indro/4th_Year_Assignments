#include <bits/stdc++.h>

using namespace std;

// Define the possible movements (up, down, left, right, diagonal)
const vector<pair<int, int>> MOVES = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

// Define a hash function for pair to be used in unordered_map
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};

int heuristic(pair<int, int> current, pair<int, int> target) {
    // Manhattan distance heuristic
    return abs(current.first - target.first) + abs(current.second - target.second);
}

vector<pair<int, int>> astar(vector<vector<int>> &grid, pair<int, int> start, pair<int, int> target) {
    // Initialize the open set as a priority queue
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> open_set;
    unordered_map<pair<int, int>, pair<int, int>, pair_hash> came_from;
    unordered_map<pair<int, int>, int, pair_hash> g_score;

    // Initialize the starting node
    open_set.push({0, start});
    g_score[start] = 0;

    while (!open_set.empty()) {
        // Get the node with the lowest f score
        pair<int, int> current = open_set.top().second;
        open_set.pop();

        // Check if we've reached the target
        if (current == target) {
            // Reconstruct the path
            vector<pair<int, int>> path;
            while (came_from.find(current) != came_from.end()) {
                path.push_back(current);
                current = came_from[current];
            }
            path.push_back(start);
            reverse(path.begin(), path.end());
            return path;
        }

        // Explore neighbors
        for (auto &move : MOVES) {
            pair<int, int> neighbor = {current.first + move.first, current.second + move.second};

            // Skip if the neighbor is out of bounds or an obstacle
            if (neighbor.first < 0 || neighbor.first >= grid.size() || neighbor.second < 0 || neighbor.second >= grid[0].size() || grid[neighbor.first][neighbor.second] == 1) {
                continue;
            }

            // Calculate tentative g score
            int tentative_g_score = g_score[current] + 1;

            // Update g score if this is a better path
            if (g_score.find(neighbor) == g_score.end() || tentative_g_score < g_score[neighbor]) {
                came_from[neighbor] = current;
                g_score[neighbor] = tentative_g_score;
                int f_score = tentative_g_score + heuristic(neighbor, target);
                open_set.push({f_score, neighbor});
            }
        }
    }

    // If no path is found
    return {};
}

// Example usage
int main() {
    vector<vector<int>> grid = {
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0}};

    pair<int, int> start = {0, 0};
    pair<int, int> target = {(int)grid.size() - 1, (int)grid[0].size() - 1};

    vector<pair<int, int>> path = astar(grid, start, target);

    cout << "Path:";
    for (auto &point : path) {
        cout << " (" << point.first << "," << point.second << ")";
    }
    cout << endl;

    return 0;
}
