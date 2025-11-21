class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> start(26,-1);
        vector<int> end(26,-1);
        int n=s.length();
        for(int i=0;i<n;i++){
            int temp=s[i]-'a';
            if(start[temp]==-1){
                start[temp]=i;
            }
            end[temp]=i;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(start[i]!=-1&&start[i]<end[i]){
                unordered_set<char> map;
                for(int k=start[i]+1;k<end[i];k++){
                    map.insert(s[k]);
                }
                count+=map.size();
            }
        }
        return count;
    }
};
