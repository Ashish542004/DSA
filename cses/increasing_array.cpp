#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long count=0;
	int maxi=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]< maxi){
			count+=maxi-arr[i];
		}
		else{
			maxi=arr[i];
		}
	}
	cout<<count<<endl;
	return 0;

}