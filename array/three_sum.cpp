class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int a=nums[i];
            if(i>0&&a==nums[i-1]){
                continue;
            }
            int low=i+1,high=n-1;
            int target=-a;
            while(low<high){
                int sum=nums[low]+nums[high];
                if(sum==target){
                    result.push_back({a,nums[low],nums[high]});
                    while(low<high&&nums[low]==nums[low+1]) low++;
                    while(low<high&&nums[high]==nums[high-1]) high--;
                    low++;
                    high--;
                }
                else if(sum<target) low++;
                else high--;
            }
        }
        return result;
    }
};
