class Solution {
public:
    void getCombination(int n,int count,string res,vector<string>& ans){
        if(res.length()==2*n){
            ans.push_back(res);
            return;
        }
        if(count<n) getCombination(n,count+1,res+'(',ans);
        if(res.length()-count<count) getCombination(n,count,res+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        getCombination(n,0,"",ans);
        return ans;
    }
};
