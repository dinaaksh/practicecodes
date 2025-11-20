class Solution { 
public:
    static bool comparator(const vector<int> &a,const vector<int> &b){
        if(a[1]==b[1]) return a[0]>b[0];
        return a[1]<b[1];
    }
    int intersectionSizeTwo(vector<vector<int>>& intervals){
        sort(intervals.begin(),intervals.end(),comparator);
        vector<int> ans;
        for(auto& temp:intervals){
            int start=temp[0];
            int end=temp[1];
            if(ans.size()>=2 && ans.back()>=start && ans[ans.size()-2]>=start)
                continue;
            if(ans.empty() || ans.back()<start){
                ans.push_back(end-1);
                ans.push_back(end);
            } 
            else{
                ans.push_back(end);
            }
        }
        return ans.size(); //space complexity O(n), optimized is O(1) in another file
    }
};
