#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int low=0;
    int high=s.length()-1;
    while(low<high){
        if(!isalnum(s[low])){
            low++;
            continue;
        }
        if(!isalnum(s[high])){
            high--;
            continue;
        }
        if(tolower(s[low])!=tolower(s[high]))return false;
        low++;
        high--;
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal, Panama";
    cout<<(isPalindrome(s)?"String is a palindrome":"String is not a palindrome");
}
