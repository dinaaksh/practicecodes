#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Element found at index: "<<i;
            return;
        }
    }
    cout<<"Element not present in array";
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    linearSearch(arr,n,k);
}
