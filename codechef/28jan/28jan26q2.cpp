#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		int ans=0;
		int mini=min(x,z);
		ans+=mini;
		if((x-mini)>0){
			ans+=(x-mini)/4;

		}
		ans+=y/2;
		cout<<ans<<endl;

	}
	return 0;
}