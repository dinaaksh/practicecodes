class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        long long int ele=0;
        for(int i=0;i<nums.size();i++){
            ele=(ele*2+nums[i])%5;
            if(ele==0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
