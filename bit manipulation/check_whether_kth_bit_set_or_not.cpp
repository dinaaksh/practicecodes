#include <bits/stdc++.h>
using namespace std;

bool isSet(int n,int k){
    int temp=(1<<k);
    if((n&temp)!=0) return true;
    return false;
}

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    cout<<(isSet(n,k)?"Yes":"No");
}
