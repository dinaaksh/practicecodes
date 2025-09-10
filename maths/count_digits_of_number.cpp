#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=002;
    int count=0;
    if(n==0)count=1;
    while(n){
        n=n/10;
        count++;
    }
    cout<<count;
}
