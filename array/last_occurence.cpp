#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[],int n,int val){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==val){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>val){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={3,4,13,13,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=13;
    int result=lastOccurence(arr,n,val);
    cout<<result;
}
