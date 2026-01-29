#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<long long>arr(n),brr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			cin>>brr[i];
		}
		vector<long long> bestTemp(n);
        bestTemp[n - 1] = max(arr[n - 1], brr[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            bestTemp[i] = max(max(arr[i],brr[i]), bestTemp[i + 1]);
        }
		
		vector<long long> prefix(n);
        prefix[0] = bestTemp[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + bestTemp[i];
        }

        while (q--) {
            int l, r;
            cin >>l >>r;
            l--; r--;
            long long result = prefix[r]-(l > 0 ? prefix[l - 1] : 0);
            cout << result << " ";
        }
        cout << endl;
    }
	return 0;
}