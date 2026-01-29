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

        vector<long long> arr(n), brr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) cin >> brr[i];

        sort(arr.begin(), arr.end(), greater<long long>());

        vector<long long> prefixB(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefixB[i] = prefixB[i - 1] + brr[i - 1];
        }

        long long answer = 0;

        for (int k = 1; k <= n; k++) {
            long long x = arr[k - 1];
            int levels = upper_bound(prefixB.begin(), prefixB.end(), k) - prefixB.begin() - 1;

            answer = max(answer, x * levels);
        }

        cout << answer << endl;
    }

    return 0;
}
