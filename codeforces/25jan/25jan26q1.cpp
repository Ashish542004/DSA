#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,s,x;
		cin>>n>>s>>x;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum=accumulate(arr.begin(), arr.end(),0);
		while(sum<=s){
			if(sum==s){
				cout<<"YES"<<endl;
				break;
			}
			else{
				sum+=x;
			}

		}
		if(sum>s){
			cout<<"NO"<<endl;
		}
	}
	return 0;
}