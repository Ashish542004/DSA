#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 998244353;

ll power(ll a, ll b) {
    ll ans = 1;

    while (b > 0) {
        if (b & 1) {
            ans = (ans * a) % MOD;
        }

        a = (a * a) % MOD;
        b >>= 1;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }

        ll fact = 1;

        for (int i = 1; i <= k; i++) {
            fact = (fact * i) % MOD;
        }

        ll p = power(k, n - k);

        ll answer = (fact * p) % MOD;

        cout << answer << '\n';
    }

    return 0;
}