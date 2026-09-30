#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        int dublicate=n;

        int k=9;
        int i=1;
        int start=1;
        while(k*i < dublicate){
            dublicate= dublicate-k*i;
            start*=10;
            k*=10;
            i++;
            
        }
        int skip= (dublicate-1)/i; //1-based indexing
        start+=skip;
        int digit= (dublicate-1)%i;
        string ans= to_string(start);
        cout<<ans[digit]<<endl;


    }
    
    return 0;
}