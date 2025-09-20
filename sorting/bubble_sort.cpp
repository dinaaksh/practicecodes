#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int pass=0;
        for(int j=0;j<i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                pass=1;
            }
        }
        if (pass==0)return;
    }
}

int main(){
    int arr[]={1,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
