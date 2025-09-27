class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> nge1;
        for(int num: nums2){
            while(!s.empty()&&num>s.top()){
                nge1[s.top()]=num;
                s.pop();
            }
            s.push(num);
        }
        vector<int> ans;
        for(int num:nums1){
            if(nge1.find(num)!=nge1.end()){
                ans.push_back(nge1[num]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};
