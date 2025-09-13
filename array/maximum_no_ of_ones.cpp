#include<bits/stdc++.h>
using namespace std;

int maximumOnes(int arr[],int n){
    int count=0;
    int maxcount=0;
    int i=0;
    while(i<n){
        if(arr[i]==1){
            count++;
            maxcount=max(maxcount,count);
        }
        else{
            count=0;
        }
        i++;
    }
    return maxcount;
}

int main(){
    int arr[]={1,1,1,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maximumOnes(arr,n);
    cout<<result;
}
