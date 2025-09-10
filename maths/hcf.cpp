#include <bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
    while(b!=0){
        a=a%b;
        swap(a,b);
    }
    return a;
}

int main(){
    int a=10,b=15;
    int result=hcf(a,b);
    cout<<result;
}
