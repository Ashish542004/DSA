#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(vector<int>&arr, int n, ll sum1, ll sum2, int i ){
    if(i==n){
        return abs(sum1-sum2);
    }
    //exclude apple
    ll opt1= solve(arr, n, sum1, sum2, i+1);
    //include apple
    ll opt2= solve(arr, n, sum1+arr[i], sum2-arr[i], i+1);

    return min(opt1, opt2);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum1=0, sum2= accumulate(arr.begin(), arr.end(),0LL);
    ll ans=solve(arr, n,sum1,sum2,0);
    cout<<ans<<endl;
    
    return 0;
}