#include <bits/stdc++.h>
using namespace std;

string s;
int ans = 0;
bool vis[9][9];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char dir[] = {'L', 'R', 'U', 'D'};

void dfs(int x, int y, int step) {

    if (x == 7 && y == 1) {
        if (step == 48)
            ans++;
        return;
    }

    if (step == 48)
        return;

    // Split pruning
    //vertical split
    if (vis[x][y - 1] && vis[x][y + 1] &&
        !vis[x - 1][y] && !vis[x + 1][y])
        return;
    //horizontal split
    if (vis[x - 1][y] && vis[x + 1][y] &&
        !vis[x][y - 1] && !vis[x][y + 1])
        return;

    vis[x][y] = true;

    if (s[step] == '?') {

        for (int k = 0; k < 4; k++) {

            int nx = x + dx[k];
            int ny = y + dy[k];

            if (!vis[nx][ny])
                dfs(nx, ny, step + 1);
        }

    } else {

        for (int k = 0; k < 4; k++) {

            if (dir[k] == s[step]) {

                int nx = x + dx[k];
                int ny = y + dy[k];

                if (!vis[nx][ny])
                    dfs(nx, ny, step + 1);

                break;
            }
        }
    }

    vis[x][y] = false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;

    // Mark border as visited
    for (int i = 0; i < 9; i++) {
        vis[0][i] = true;
        vis[8][i] = true;
        vis[i][0] = true;
        vis[i][8] = true;
    }

    dfs(1, 1, 0);

    cout << ans << '\n';

    return 0;
}