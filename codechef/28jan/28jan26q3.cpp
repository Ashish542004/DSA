#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;

        int r = x % k;

        int ans = min(x,r); 
        if (r != 0 && x + (k - r) <= n) {
            ans = min(ans, k - r);
        }

        cout << ans << endl;
    }

    return 0;
}
