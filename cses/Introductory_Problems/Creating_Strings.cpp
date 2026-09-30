// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     set<string>st;
//     do{
//         st.insert(s);
        
//     }while(next_permutation(s.begin(),s.end()));
//     cout<<st.size()<<endl;
//     for(string a:st){
//         cout<<a<<endl;
//     }
    
//     return 0;
// }


//recursive approach
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s, set<string>& st, int left, int right){
    if(left==right){
        st.insert(s);
    }
    for(int i=left; i<=right; i++){
        swap(s[i],s[left]);
        solve(s, st, left+1, right);
        swap(s[i],s[left]);
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    set<string>st;
    solve(s,st,0,s.size()-1);
    cout<< st.size()<<endl;
    for(string a: st){
        cout<<a<<endl;
    }

    
    return 0;
}