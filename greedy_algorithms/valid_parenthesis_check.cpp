class Solution {
public:
    bool checkValidString(string s) {
        int left=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='('||c=='*') left++;
            else left--;
            if(left<0) return false;
        }
        int right=0;
        for(int i=s.length()-1;i>=0;i--){
            char c=s[i];
            if(c==')'||c=='*') right++;
            else right--;
            if(right<0) return false;
        }
        return true;
    }
};
