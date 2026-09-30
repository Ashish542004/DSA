#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int draw=n-a-b;

        if((a+b)>n){
            cout<<"NO"<<endl;
            continue;
        }
        //one player cannot win all the games
        if((a==0 || b==0) && ((a+b)!=0)){
            cout<<"NO"<< endl;
            continue;
        }
        cout << "YES" << endl;
        //prints turns of first player : (1...n)
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;

        // print turns of second player: a+1,a+2,..a+b,1,2,...a,a+b+1...n
        for (int i = a + 1; i <= a + b; i++) cout << i << " ";
        for (int i = 1; i <= a; i++) cout << i << " ";
        for (int i = a + b + 1; i <= n; i++) cout << i << " ";
        cout << endl;

    
    }
    return 0;
}
