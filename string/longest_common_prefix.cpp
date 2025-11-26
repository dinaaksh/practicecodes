class Solution {
public:
    int helper(string a,string b){
        int i=0;
        int n=min(a.size(),b.size());
        while(i<n&&a[i]==b[i]){
            i++;
        }
        return i;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int n=helper(ans,strs[i]);
            ans=ans.substr(0,n);
        }
        return ans;
    }
};
