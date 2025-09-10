#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=67;
    int ans=0;
    while(n){
        int last=n%10;
        ans=ans*10+last;
        n=n/10;
    }
    cout<<ans;
}
