#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> g[4] = {
    {1, 3},
    {0, 2},
    {1, 3},
    {0, 2}
};

bool visited[4];

// DFS Function
void dfs(int s) {
    visited[s] = true;
    cout << s << " ";

    for (int c : g[s]) {
        if (!visited[c]) {
            dfs(c);
        }
    }
}

// BFS Function
void bfs(int start) {
    queue<int> q;

    for (int i = 0; i < 4; i++) {
        visited[i] = false;
    }

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int c : g[node]) {
            if (!visited[c]) {
                visited[c] = true;
                q.push(c);
            }
        }
    }
}

int main() {

    cout << "DFS: ";
    for (int i = 0; i < 4; i++) {
        visited[i] = false;
    }
    dfs(0);

    cout << endl;

    cout << "BFS: ";
    bfs(0);

    return 0;
}