#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(sum,maxsum);
        if(sum<0) sum=0;
    }
    return maxsum;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=kadane(arr,n);
    cout<<result;
}
