class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        sort(batteries.begin(),batteries.end(),greater<int>());
        long long sum=0;
        for(int temp:batteries){
            sum+=temp;
        }
        for(int i=0;i<batteries.size();i++){
            if(batteries[i]>sum/n){
                sum-=batteries[i];
                n--;
            }
            else return sum/n;
        }
        return sum/n;
    }
};
