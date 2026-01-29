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

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = 0;
        int maxi = 0;

        for (int x : arr) {
            if (x <= maxi + 1) {
                ans++;
                maxi = max(maxi, x);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
