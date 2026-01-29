#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++) cin>>arr[i];
        int index=1;
        while(index<=n && arr[index]==n-index+1) index++;

        int nextBig=-1; 
        for(int i=index;i<=n;i++){
            if(arr[i]==n-index+1) nextBig=i;
        }
        for(int i=1;i<index;i++) cout<<arr[i]<<" ";
        if(nextBig!=-1){
            //reverse the segment
            for(int i=nextBig;i>=index;i--) cout<<arr[i]<<" ";
            for(int i=nextBig+1;i<=n;i++) cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}