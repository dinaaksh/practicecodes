class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        int n=chars.size();
        while(i<n){
            int count=0;
            char temp=chars[i];
            while(i<n&&chars[i]==temp){
                count++;
                i++;
            }
            chars[j]=temp;
            j++;
            if(count>1){
                string s=to_string(count);
                for(char c:s){
                    chars[j]=c;
                    j++;
                }
            }
        }
        return j;
    }
};
