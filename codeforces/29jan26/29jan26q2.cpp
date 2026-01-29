#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool>visited(n, false);
        int total = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                total++;
                visited[i] = true;
                if (i > 0) visited[i - 1] = true;
                if (i < n - 1) visited[i + 1] = true;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && !visited[i]) {
                int pos = (i + 1 < n) ? i + 1 : i;
                s[pos] = '1';
                total++;

                visited[pos] = true;
                if (pos > 0) visited[pos - 1] = true;
                if (pos < n - 1) visited[pos + 1] = true;
            }
        }

        cout << total << endl;
    }

    return 0;
}