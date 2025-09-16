#include <bits/stdc++.h>
using namespace std;

int insertPosition(int arr[],int n,int val){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=val){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=9;
    int result=insertPosition(arr,n,val);
    cout<<result;
}
