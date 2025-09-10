#include <bits/stdc++.h>
using namespace std;

int factorialRecursive(int n){
    if(n==0)return 1;
    return n*factorialRecursive(n-1);
}

int factorialIterative(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    int n=5;
    int result1=factorialRecursive(n);
    int result2=factorialIterative(n);
    cout<<result1<<endl;
    cout<<result2;
}
