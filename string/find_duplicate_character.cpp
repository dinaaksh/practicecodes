#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicate(string s){
    unordered_map<char,int> m;
    for(char c: s){
        m[c]++;
        }
    bool flag=false;
    for(auto& n:m){
        if((n.second)>1){
            cout<<n.first<<" ";
            flag=true;
        }
    }
    if(!flag){
        cout<<"No duplicate found.";
    }
}

int main(){
    string s="carpooling";
    findDuplicate(s);
}
