#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n){
    if(n&1){
        return true;
    }
    else return false;
}

int main(){
    int n;
    cin>>n;
    cout<<(isOdd(n)?"Odd":"Even");
}
