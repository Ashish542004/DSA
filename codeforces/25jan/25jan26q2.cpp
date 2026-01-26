// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		vector<int>arr(n);
// 		int maxi=INT_MIN;
// 		int maxiIndex=-1;
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 			if(arr[i]>maxi){
// 				maxi=arr[i];
// 				maxiIndex=i;
// 			}
// 		}
// 		if(maxiIndex!=0){
// 			reverse(arr.begin(), arr.begin()+maxiIndex+1);
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<arr[i]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            int position= i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[position]) {
                    position = j;
                }
            }
            if (arr[position] > arr[i]) {
                reverse(arr.begin() + i, arr.begin() + position + 1);
                break;
            }
        }

        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
