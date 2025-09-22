#include <iostream>
using namespace std;

string reverseString(string &s){
    int low=0;
    int high=s.length()-1;
    while(low<high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
    return s;
}

int main(){
    string s="abc efg";
    cout<<reverseString(s);
}
