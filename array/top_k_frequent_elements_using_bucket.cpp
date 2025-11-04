class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int count=0;
        int n=nums.size();
        vector<vector<int>> arr(n+1);
        for(auto& temp: freq){
            int num=temp.first;
            int freq=temp.second;
            arr[freq].push_back(num);
        }
        vector<int> ans;
        for(int i=n;i>=0 && ans.size()<k;i--){
            for(int num:arr[i]){
                ans.push_back(num);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
