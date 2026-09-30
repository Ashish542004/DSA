#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    set<int>s;
    int n;
    while(t--){
        cin>>n;
        s.insert(n);
    }
    cout<<s.size()<<"\n";
    
    return 0;
}