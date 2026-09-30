#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int total = 1 << n;

    for(int i=0;i<total;i++){

        int gray = i ^ (i>>1); //formula of gray code i^right shift of i by 1

        for(int j=n-1;j>=0;j--)
            cout<<((gray>>j)&1);

        cout<<"\n";
    }
}
// //recursion
// #include <bits/stdc++.h>
// using namespace std;

// vector<string> grayCode(int n) {

//     // Base case
//     if (n == 1)
//         return {"0", "1"};

//     vector<string> prev = grayCode(n - 1);
//     vector<string> ans;

//     // Prefix 0
//     for (string s : prev)
//         ans.push_back("0" + s);

//     // Prefix 1 to reversed list
//     for (int i = prev.size() - 1; i >= 0; i--)
//         ans.push_back("1" + prev[i]);

//     return ans;
// }

// int main() {

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     if (n == 0) {
//         cout << "0\n";
//         return 0;
//     }

//     vector<string> ans = grayCode(n);

//     for (string s : ans)
//         cout << s << '\n';

//     return 0;
// }