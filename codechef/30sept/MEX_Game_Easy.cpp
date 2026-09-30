#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int mex = 0;

        while (mp.count(mex)) {
            mex++;
        }

        ll moves = 0;

        // Values smaller than MEX
        for (int x = 1; x < mex; x++) {
            moves += 1LL * (mp[x] - 1) * x;
        }

        // Values greater than MEX
        for (auto &[x, freq] : mp) {
            if (x > mex) {
                moves += 1LL * freq * (x - mex - 1);
            }
        }

        if (moves % 2)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}