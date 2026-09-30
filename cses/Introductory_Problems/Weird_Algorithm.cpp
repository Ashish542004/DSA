#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	long long n;
	cin>>n;
	while(n>=1){
		cout<<n<<" ";
		if(n==1) break;
		else if(n&1){
			n= n*3+1;
		}
		else n=n/2;

	}
	return 0;
}