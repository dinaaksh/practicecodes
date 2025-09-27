class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int i=s.length()-2;
        while(i>=0&&s[i]>=s[i+1]){
            i--;
        }
        if(i>=0){
            int j=s.length()-1;
            while(j>=0&&s[j]<=s[i]){
                j--;
            }
            swap(s[i],s[j]);
        }
        else{
            return -1;
        }
        reverse(s.begin()+i+1,s.end());
        long long ans=stoll(s);
        if(ans>INT_MAX)return -1;
        else return (int)ans;
    }
};
