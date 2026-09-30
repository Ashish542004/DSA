#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        unordered_set<int>s;
        int filled;
        for(int i=1;i<=m;i++){
            cin>>filled;
            s.insert(filled);
        }
        while(k--){
            for(int i=1;i<=n;i++){
                if(s.find(i)==s.end()){
                    cout<<i<<" ";
                    s.insert(i);
                    break;
                }
            }
        }   
        cout<<"\n";

    }
    
    return 0;
}