#include <bits/stdc++.h>
using namespace std;
long long binpow(long long base, long long n,long long m){
	if(n==0){
		return 1;
	}
	if(n&1){
		long long ans=binpow(base,(n-1)/2,m);
		return (base*ans* ans)%m;
	}
	else {
		long long ans=binpow(base,n/2,m);
		return (ans*ans)%m;
	}

}
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long mod=1e9+7;
	long long n;
	cin>>n;
	long long ans=binpow(2,n,mod);
	cout<<ans%mod<<endl;
	return 0;
}