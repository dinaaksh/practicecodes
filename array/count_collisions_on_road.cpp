class Solution {
public:
    int countCollisions(string directions) {
        int count=0;
        bool flag=false;
        int buffer=0;
        for(char c:directions){
            if(c=='R'){
                buffer++;
            }
            else if(c=='S'){
                flag=true;
                count+=buffer;
                buffer=0;
            }
            else{
                if(buffer>0){
                    flag=true;
                    count+=(buffer+1);
                    buffer=0;
                }
                else if(flag){
                    count+=1;
                }
            }
        }
        return count;
    }
};
