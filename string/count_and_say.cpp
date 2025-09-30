class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string s="1";
        for(int i=2;i<=n;i++){
            string temp="";
            for(int j=0;j<s.length();j++){
                int count=1;
                while(j+1<s.length()&&s[j]==s[j+1]){
                    count++;
                    j++;
                }
                temp+=to_string(count)+s[j];
            }
            s=temp;
        }
        return s;
    }
};
