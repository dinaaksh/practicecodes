class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int second=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(second!=-1&&(i-second)<=k){
                    return false;
                }
                second=i;
            }
        }
        return true;
    }
};
