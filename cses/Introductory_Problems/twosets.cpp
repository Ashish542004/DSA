#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	long long n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	vector<int> set1, set2;
	long long sum1=0;
	long long finalSum= n*(n+1)/2;
	//odd sum cannot be divided into two equal parts
	if (finalSum &1){
		cout<<"NO"<<endl; 
		return 0;
	}

	else{

		long long halfSum=finalSum/2;
		for(int i=n-1;i>=0;i--){
			if(sum1+arr[i]<=halfSum){
				sum1+=arr[i];
				set1.push_back(arr[i]);
			}
			else{
				set2.push_back(arr[i]);
			}

		}


	}
	cout<<"YES"<<endl;
	cout << set1.size() << "\n";
    for (int x : set1)
        cout << x << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (int x : set2)
        cout << x << " ";
    cout << "\n";
    


	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// bool solve(vector<int>& arr,
//            vector<int>& set1,
//            vector<int>& set2,
//            long long sum1,
//            long long sum2,
//            int i,
//            int n) {

//     if (i == n) {
//         return (sum1 == sum2);
//     }

//     // Put current element in set1
//     set1.push_back(arr[i]);
//     if (solve(arr, set1, set2, sum1 + arr[i], sum2, i + 1, n))
//         return true;
//     set1.pop_back();

//     // Put current element in set2
//     set2.push_back(arr[i]);
//     if (solve(arr, set1, set2, sum1, sum2 + arr[i], i + 1, n))
//         return true;
//     set2.pop_back();

//     return false;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//         arr[i]=i+1;\

//     vector<int> set1, set2;

//     if (solve(arr, set1, set2, 0, 0, 0, n)) {
//         cout << "YES\n";

//         cout << set1.size() << "\n";
//         for (int x : set1)
//             cout << x << " ";
//         cout << "\n";

//         cout << set2.size() << "\n";
//         for (int x : set2)
//             cout << x << " ";
//         cout << "\n";
//     } else {
//         cout << "NO\n";
//     }

//     return 0;
// }

