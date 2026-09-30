#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int n;
	cin>>n;
	int count=0;
	for (int i = 5; i<=n; i*=5)
	{
		count+=(n/i);
	}
	cout<<count<<endl;
	return 0;
}