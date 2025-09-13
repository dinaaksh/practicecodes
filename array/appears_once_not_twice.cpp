#include<bits/stdc++.h>
using namespace std;

int appearsOnce(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1^=arr[i];
    }
    return xor1;
}

int main(){
    int arr[]={4,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=appearsOnce(arr,n);
    cout<<result;
}
