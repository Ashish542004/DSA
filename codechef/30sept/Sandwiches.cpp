#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b,h,c;
    cin >> b>>h>>c;
    if((h+c)<(b/2)) cout<< h+c;
    else cout<< b/2;

    
    return 0;
}