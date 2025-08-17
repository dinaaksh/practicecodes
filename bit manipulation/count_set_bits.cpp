#include <bits/stdc++.h>
using namespace std;

int countbits(int n){
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int ans=countbits(n);
    cout<<ans;
}
