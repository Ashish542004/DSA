#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n,m;
        cin>>n>>m;
        if(((n&1)==0) || ((m&1)==0)){
            cout<<"Yes"<<"\n";
        }
        else cout<<"No"<<"\n";
    }
    
    return 0;
}