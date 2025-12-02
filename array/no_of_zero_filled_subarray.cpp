class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long maxcount=0;
        long long count=0;
        for(int num:nums){
            if(num==0){
                count++;
                maxcount+=count;
            }
            else count=0;
        }
        return maxcount;
    }
};
