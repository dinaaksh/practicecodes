#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[],int n){
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}

int main(){
    int arr[]={1,2,2,4,5};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=removeDuplicate(arr,n1);
    for(int i=0;i<n2;i++){
        cout<<arr[i]<<" ";
    }
}
