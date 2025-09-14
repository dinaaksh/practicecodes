#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    int arr[]={1,2,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<(checkSorted(arr,n)?"Array is sorted.":"Array is unsorted.");
}
