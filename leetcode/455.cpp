// 455. Assign Cookies
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gi=0;
        int si=0;
        while(gi<g.size() && si<s.size()){
            if(g[gi]<=s[si]){ //child satisfied
                gi++;
            }
            si++;
        }
        return gi;
        //TLE brute force
        // vector<bool>visited(s.size()+1,false);
        // int count=0;
        // for(int i=0;i<g.size();i++){
        //     for(int j=0;j<s.size();j++){
        //         if(s[j]>=g[i] && !visited[j]){
        //             visited[j]=true;
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return count;

        
    }
};