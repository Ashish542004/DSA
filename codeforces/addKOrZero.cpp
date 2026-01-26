#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long long >arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<n;i++) arr[i]=arr[i]+(arr[i]%(k+1))*k;
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}