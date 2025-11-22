class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]-1)%3==0){
                nums[i]--;
                count++;
            }
            else if((nums[i]+1)%3==0){
                nums[i]++;
                count++;
            }
            else{
                continue;
            }
        }
        return count;
    }
//same complexity but faster method is to iterate num belonging to nums and tertiary operator if divisible by 3 or not, add 1 if no 0 if yes to count
};
