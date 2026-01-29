// 1200. Minimum Absolute Difference
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>answer;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        unordered_set<int>st(arr.begin(), arr.end());
        int diff= INT_MAX;
        for(int i=0;i<n-1;i++){
            diff=min(diff, abs(arr[i+1]-arr[i]));
        }
        for(int i=0;i<arr.size();i++){
            if(st.find(arr[i]+diff)!=st.end()){
                answer.push_back({arr[i],arr[i]+diff});
            }
        }
        //not required
        //sort(answer.begin(),answer.end());
        return answer;
        
    }
};