// 3818. Minimum Prefix Removal to Make Array Strictly Increasing
#include<stack>
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        stack<int>st;
        for( int i:nums) st.push(i);
        int last=st.top();
        st.pop();
        while(!st.empty() && st.top()<last){
            last=st.top();
            st.pop();
        }
        return st.size();
        
    }
};