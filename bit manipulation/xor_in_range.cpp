#include <bits/stdc++.h>
using namespace std;

int getXOR(int n){
    int mod=n%4;
    if(mod==0) return n;
    else if(mod==1) return 1;
    else if(mod==2) return n+1;
    else if(mod==3) return 0;
    else return -1;
}

int findXOR(int l,int r){
    return (getXOR(l-1)^getXOR(r));
}

int main()
{
    int left=2, right=6;
    cout<<findXOR(left,right);
}
