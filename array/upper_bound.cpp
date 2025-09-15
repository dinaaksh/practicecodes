#include <bits/stdc++.h>
using namespace std;

int upperBound(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return arr[ans];
}

int main(){
    int arr[]={3,4,6,7,9,12,16,17};
    int target=14;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=upperBound(arr,n,target);
    cout<<result;
}
