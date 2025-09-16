#include <bits/stdc++.h>
using namespace std;

int find_floor(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    int ans1=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=k){
            ans1=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[ans1];
}

int find_ceil(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    int ans2=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=k){
            ans2=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return arr[ans2];
}

pair<int,int> answer(int arr[],int n,int k){
    int ans1=find_floor(arr,n,k);
    int ans2=find_ceil(arr,n,k);
    return make_pair(ans1,ans2);
}

int main(){
    int arr[]={3,4,4,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    pair<int,int> result=answer(arr,n,k);
    cout<<result.first<<" "<<result.second;
}
