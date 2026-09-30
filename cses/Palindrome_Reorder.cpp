#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.length();
    int countOdd=0;
    unordered_map<char,int>mp;
    for(char ch:s){
        mp[ch]++;
    }
    for(auto it: mp){
        if(it.second & 1) countOdd++;
    }
    if(n&1 && countOdd>1) cout<<"NO SOLUTION";
    else if( (n&1)==0 && countOdd>0) cout<<"NO SOLUTION";

    else{ //valid palindrome
        string left="";
        string middle="";
        for(auto it: mp){
            if(it.second & 1){
                middle+=string(it.second,it.first);
            }
            else
            left+=string(it.second/2,it.first);

        }
        string right=left;
        reverse(right.begin(),right.end());
        cout<<left+middle+right;
    }

    
    return 0;
}