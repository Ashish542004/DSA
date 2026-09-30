#include <bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	string s;
	cin>>s;
	int left=0;
	int maxi=-1;
	for(int right=0;right<s.size();right++){
		while(s[left]==s[right]){
			right++;

		}
		
		maxi=max(maxi, right-left);
		left=right;
		
	}
	cout<<maxi<<endl;
	return 0;
}