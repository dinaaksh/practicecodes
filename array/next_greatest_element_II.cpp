class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=0;i<n*2;i++){
            int num=nums[i%n];
            while(!s.empty()&&num>nums[s.top()]){
                ans[s.top()]=num;
                s.pop();
            }
            if(i<n) s.push(i);
        }
        return ans;
    }
};
