#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int n;
	cin>>n;
	if(n==1) cout<<1;
	else if(n==2|| n==3) cout<< "NO SOLUTION";
	else{
		//first print all the even no
		for(int i=2; i<=n;i+=2){
			cout<<i<<" ";
		}
		//first print all the odd no
		for(int i=1; i<=n;i+=2){
			cout<<i<<" ";
		}
	}
	return 0;
}