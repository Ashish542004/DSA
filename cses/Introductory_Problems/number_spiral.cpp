#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long row,col;
		cin>>row>>col;
		long long maxi= max(row,col);
		long long ans;
		// diagonal= 1+ 2*i (from i=1 to maxi-1)
		long long diagonal= (maxi *maxi)- maxi+1;
		if(row==col){
			cout<< diagonal<<endl;
			continue;
		}
		else{
			if(row<col){
				if(col&1){
					ans= diagonal+abs(row-col);
				}
				else{
					ans= diagonal- abs(row-col);
				}

			}
			else{ //row>col
				if(row &1){
					ans= diagonal- abs(row-col);
				}
				else 
					ans= diagonal +abs(row-col);
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}