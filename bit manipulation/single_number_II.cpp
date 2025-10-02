class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int triplets_sum=0;
            int mask=(1<<i);
            for(int num: nums){
                if((num&mask)!=0) triplets_sum++;
            }
            if(triplets_sum%3!=0){
                ans|=mask;
            }
        }
        return ans;
    }
};
