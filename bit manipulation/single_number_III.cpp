class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long XOR=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            XOR^=nums[i];
        }
        long long diff=XOR&-XOR;
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            if(nums[i]&diff) xor1^=nums[i];
            else xor2^=nums[i];
        }
        nums.clear();
        nums.push_back(xor1);
        nums.push_back(xor2);
        return nums;
    }
};
