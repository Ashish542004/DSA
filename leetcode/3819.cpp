//3819 rotate non-negative elements
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>positive;
        for(int i:nums){
            if(i>=0) positive.push_back(i);
        }
        int np=positive.size();
        vector<int>temp(np);
        for(int i=0;i<np;i++){
            temp[i]=positive[(i+k)%np];
        }
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=temp[p++];
            }

        }
        return nums;
    }
};