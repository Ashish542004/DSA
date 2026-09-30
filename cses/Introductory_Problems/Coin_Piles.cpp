#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bool isPossible(int a, int b){
//     if(a==0 && b==0) return true;

//     if(a<0 || b<0 ) return false;
//     return isPossible(a-2,b-1) || isPossible(a-1,b-2);
// }
bool isPossible(int a, int b){
    if((a+b)%3==0 && max(a,b)<=2*min(a,b)) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int a,b;
        cin>>a>>b;
        string ans=(isPossible(a,b)==true)?"YES":"NO";
        cout<<ans<<endl;
    }
    
    return 0;
}