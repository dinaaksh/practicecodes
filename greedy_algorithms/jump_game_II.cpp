class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int count=0;
        int end=0;
        int maxend=0;
        for(int i=0;i<n-1;i++){
            maxend=max(maxend,i+nums[i]);
            if(i==end){
                count++;
                end=maxend;
            }
            if(end>=n-1) break;
        }
        return count;
    }
};
