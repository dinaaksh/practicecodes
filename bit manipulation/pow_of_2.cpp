#include <bits/stdc++.h>
using namespace std;

bool ispowof2(int n){
    return (n>0)&&((n&(n-1))==0);
}

int main(){
    int n;
    cin>>n;
    cout<<(ispowof2(n)?"Yes":"No");
}
