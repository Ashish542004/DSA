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
		vector<int> arr(n + 1);
        vector<bool> visited(n + 1, false);

        arr[n] = 1;
        visited[1] = true;

        for (int i = n - 1; i >= 1; i--) {
            int add = arr[i + 1] + i;
            if (add <= n && !visited[add]) {
                arr[i] = add;
            } else {
                arr[i] = arr[i + 1] - i;
            }
            visited[arr[i]] = true;
        }

        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
