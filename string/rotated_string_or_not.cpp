#include <iostream>
using namespace std;

bool isRotated(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    string s3=s1+s2;
    return s3.find(s2)!=string::npos;
}

int main(){
    string s1="abc";
    string s2="bca";
    cout<<(isRotated(s1,s2)?"Yes string is a rotation of the other":"No string is not rotation of the other");
}
