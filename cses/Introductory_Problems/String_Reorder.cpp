#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n=s.size();
    vector<int>freq(26,0);
    for(char ch:s){
        freq[ch-'A']++;
    }
    int maxi= *max_element(freq.begin(), freq.end());
    //f = maximum frequency
    // n = total length
    // The remaining characters are: n - f
    // To separate f copies of the same character, you need at least: f - 1 other characters.
    // So, n - f >= f - 1
    // Now solve it: n + 1 >= 2f
    if(maxi > (n+1)/2){
        cout<<-1<<endl;
        return 0;
    }
    string ans="";
    for(int i=0;i<s.size();i++){
        bool placed=false;
        for(int c=0;c<26;c++){
            if(freq[c]==0) continue;
            if(!ans.empty() && ans.back()== char('A'+c)) continue;

            freq[c]--;
            int remaining= n-i-1;
            int maxi=0;
            int id=-1;
            for(int k=0;k<26;k++){
                if(freq[k]>maxi){
                    maxi=freq[k];
                    id=k;
                }
            }
            bool flag=false;
            if(remaining==0) flag= true;
            else{
                int limit=(remaining+1)/2;
                if(id!=-1 && id==c){
                    limit=remaining/2;
                }
                flag= (maxi<=limit);
            }
            if(flag){
                ans+=char('A'+c);
                placed=true;
                break;
            }
            freq[c]++;
        }
        if(!placed){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}