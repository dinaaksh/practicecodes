class Solution {
public:
    static bool comparator(const vector<int> &a,const vector<int> &b){
        if(a[1]==b[1]) return a[0]>b[0];
        return a[1]<b[1];
    }
    int intersectionSizeTwo(vector<vector<int>>& intervals){
        sort(intervals.begin(),intervals.end(),comparator);
        int p1=-1;
        int p2=-1;
        int count=0;
        for(const auto &temp:intervals){
            int start=temp[0];
            int end=temp[1];
            if(start<=p1){
                continue;
            }
            else if(start<=p2){
                p1=p2;
                p2=end;
                count++;
            }
            else{
                p2=end;
                p1=end-1;
                count+=2;
            }
        }
        return count;
    }
};
