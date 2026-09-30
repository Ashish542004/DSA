#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	long long n;
	cin>>n;
	vector<long long>arr(n-1);
	long long sum=0;
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	long long actual_sum= (n*(n+1))/2;
	// cout<<actual_sum<<endl;
	// cout<<sum<<endl;
	cout<< actual_sum-sum;
	return 0;
}