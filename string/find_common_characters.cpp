class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> minfreq;
        for(char c: words[0]){
            minfreq[c]++;
        }
        for(int i=1;i<words.size();i++){
            unordered_map<char,int> freq;
            for(char c:words[i]){
                freq[c]++;
            }
            for(auto &temp: minfreq){
                if(freq.find(temp.first)==freq.end()) temp.second=0;
                else temp.second=min(temp.second,freq[temp.first]);
            }
        }
        vector<string> ans;
        for(auto &temp:minfreq){
            for(int i=0;i<temp.second;i++){
                ans.push_back(string(1,temp.first));
            }
        }
        return ans;
    }
};
