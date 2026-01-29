// 2220. Minimum Bit Flips to Convert Number
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result=start^goal;
        int count=0;
        while(result!=0){
            int bit=result&1;
            if(bit) count++;
            result>>=1;
        }
        return count;
        
    }
};