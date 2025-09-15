#include <bits/stdc++.h>
using namespace std;

int majority(int arr[],int n){
    int ele;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            ele=arr[i];
        }
        else if(ele==arr[i]) count++;
        else count--;
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele) j++;
    }
    if(j>n/2)return ele;
    else return -1;
}

int main(){
    int arr[]={2,4,1,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=majority(arr,n);
    cout<<result;
}
