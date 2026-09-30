#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int maxi= INT_MIN;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            int value= arr[i]-i; 
            freq[value]++;

            maxi=max(maxi, freq[value]); //elements already beloging to staircase

        }
        count=n-maxi;
        cout <<count<<"\n";
        
    }
    
    return 0;
}