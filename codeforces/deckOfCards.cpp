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
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		unordered_map<int,int>prefixXOR;
		prefixXOR[0]=1; 
		int xorSum=0;
		int count=0;

		for(int i=0;i<n;i++){
			xorSum^=arr[i];
			if(prefixXOR.find(xorSum^k)!=prefixXOR.end()){
				count+=prefixXOR[xorSum^k];
			}
			prefixXOR[xorSum]++;
		}
		cout<<count<<endl;
    }
	return 0;
}