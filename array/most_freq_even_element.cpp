class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num: nums){
            if((num&1)==0){
                freq[num]++;
            }
        }
            int count=0;
            int ans=-1;
            for(auto temp:freq){
                int num=temp.first;
                int val=temp.second;
                if(val>count||(count==val&&num<ans)){
                    ans=num;
                    count=val;
                }
            }
        return ans;
    }
};
