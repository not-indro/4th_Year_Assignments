#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Define possible movements (up, down, left, right)
const vector<pair<int, int>> MOVES = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// Node structure for A* search
struct Node {
    int x, y; // coordinates
    vector<char> path; // current path
    Node(int _x, int _y, const vector<char>& _path) : x(_x), y(_y), path(_path) {}
};

// Heuristic function (Manhattan distance)
int heuristic(int x, int y, int N) {
    return (N - 1 - x) + (N - 1 - y);
}

// Custom comparator for priority queue
struct CompareNodes {
    bool operator()(const pair<int, Node>& a, const pair<int, Node>& b) {
        return a.first > b.first; // Compare based on heuristic value
    }
};

// Function to check if cell is valid and not visited
bool isValid(int x, int y, int N, const vector<vector<int>>& grid, const vector<vector<bool>>& visited) {
    return x >= 0 && y >= 0 && x < N && y < N && grid[x][y] && !visited[x][y];
}

// Function to find all feasible paths from source to destination
vector<vector<char>> findPaths(const vector<vector<int>>& grid) {
    int N = grid.size();
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    vector<vector<char>> paths;

    // Priority queue for A* search
    priority_queue<pair<int, Node>, vector<pair<int, Node>>, CompareNodes> pq;
    pq.push({heuristic(0, 0, N), Node(0, 0, {})});

    // Perform A* search
    while (!pq.empty()) {
        int x = pq.top().second.x;
        int y = pq.top().second.y;
        vector<char> path = pq.top().second.path;
        pq.pop();

        // Mark current cell as visited
        visited[x][y] = true;

        // Destination reached, add path to result
        if (x == N - 1 && y == N - 1) {
            paths.push_back(path);
            continue;
        }

        // Explore all possible movements
        for (const auto& move : MOVES) {
            int new_x = x + move.first;
            int new_y = y + move.second;
            char direction;
            if (move == make_pair(-1, 0)) direction = 'U';
            else if (move == make_pair(1, 0)) direction = 'D';
            else if (move == make_pair(0, -1)) direction = 'L';
            else direction = 'R';

            // If valid cell and not visited, add to priority queue
            if (isValid(new_x, new_y, N, grid, visited)) {
                vector<char> new_path = path;
                new_path.push_back(direction);
                pq.push({heuristic(new_x, new_y, N) + new_path.size(), Node(new_x, new_y, new_path)});
            }
        }
    }

    return paths;
}

// Function to print paths
void printPaths(const vector<vector<char>>& paths) {
    for (const auto& path : paths) {
        for (char c : path) {
            cout << c << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> grid = {
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1}
    };

    vector<vector<char>> paths = findPaths(grid);
    if (paths.empty()) {
        cout << "No feasible paths exist." << endl;
    } else {
        cout << "Feasible paths:" << endl;
        printPaths(paths);
    }

    return 0;
}
