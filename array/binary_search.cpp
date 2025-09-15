#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k)return true;
        else if(arr[mid]<k) low=mid+1;
        else{
            high=mid-1;
        }
    }
    return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    cout<<(binarySearch(arr,n,k)?"Element found":"Element not found");
}
