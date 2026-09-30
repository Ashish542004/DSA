#include <bits/stdc++.h>
#define ll long long
using namespace std;

int isPossible(vector<vector<int>>& arr, int i, int j, int size){
    int element=0;
    while(true){
        //check all elements in row
        int flagRow=0, flagCol=0;
        for(int n=j; n>=0; n--){
            if(arr[i][n] ==element )
            flagRow=1;
        }
        //check all elements in col
        for(int m=i;m>=0;m-- ){
            if(arr[m][j] == element)
            flagCol=1;
        }
        if(!flagRow && !flagCol)  return element;
        else element+=1;

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>>arr(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            int element=isPossible(arr,i,j,n);
            arr[i][j]=element;
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}