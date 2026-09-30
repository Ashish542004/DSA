#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    string colors = "ABCD";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            char original = grid[i][j];

            for (char c : colors) {

                if (c == original)
                    continue;

                if (i > 0 && grid[i - 1][j] == c) //check up
                    continue;

                if (j > 0 && grid[i][j - 1] == c) //check left
                    continue;

                grid[i][j] = c;
                
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout <<endl;
    }

    return 0;
}