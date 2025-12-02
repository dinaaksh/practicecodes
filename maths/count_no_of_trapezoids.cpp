class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        long long mod=1e9+7;
        unordered_map<int,int> freq;
        for(auto temp:points){
            freq[temp[1]]++;
        }
        long long maxcount=0;
        long long segments=0;
        for(auto& [y,val]: freq){
            if(val<2) continue;
            long long curr=(long long)val*(val-1)/2;
            curr%=mod;
            long long count=(curr*segments)%mod;
            maxcount=(maxcount+count)%mod;
            segments=(segments+curr)%mod;
        }
        return maxcount;
    }
};
