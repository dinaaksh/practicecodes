class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long> ans(k,1e18);
        long long sum=0;
        long long maxsum=-1e18;
        ans[0]=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=(i+1)%k;
            if(ans[rem]!=1e18){
                maxsum=max(maxsum,sum-ans[rem]);
            }
            ans[rem]=min(ans[rem],sum);
        }
        if(maxsum==-1e18) return 0;
        return maxsum;
    }
};
