#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int ans=0;
    int temp=n;
    if(n<0) return false;
    while(temp){
        int last=temp%10;
        ans=ans*10+last;
        temp=temp/10;
    }
    return ans==n;
}
int main(){
    int n=57675;
    cout<<(palindrome(n)?"Is a palindrome":"Is not a palindrome");
}
