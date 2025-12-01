class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int sum1=0,sum2=0;
        int n=gas.size();
        int tank=0;
        for(int i=0;i<n;i++){
            sum1+=gas[i];
            sum2+=cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0){
                start=i+1;
                tank=0;
            }
        }
        if(sum1<sum2) return -1;
        return start;
    }
};
