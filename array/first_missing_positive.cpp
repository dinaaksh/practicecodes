class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=1;i<=n;i++){
            if(i!=nums[i-1]){
                return i;
            }
        }
        return n+1;
    }
};
