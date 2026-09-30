#include <bits/stdc++.h>
#define ll long long
using namespace std;
void towerofHanoi(int n, string source, string aux, string destination, vector<pair<string,string>>&arr,int &cnt){
    if(n==1){
        arr.push_back({source,destination});
        cnt++;
        return;
    }

    //move all disk from source to aux
    towerofHanoi(n-1, source, destination,aux,arr,cnt);

    //move the largest disk
    arr.push_back({source, destination});
    cnt++;

    //move from aux to destination
    towerofHanoi(n-1, aux, source, destination, arr, cnt ); 



}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<pair<string,string>>arr;
    int cnt=0;
    towerofHanoi(t,"1","2","3",arr,cnt);
    // cout<<cnt<<endl;
    cout<<arr.size()<<endl;
    for(auto it:arr){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
    return 0;
}