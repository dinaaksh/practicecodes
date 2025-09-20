#include <iostream>
using namespace std;

int partition(int arr[], int p, int q){
    int x=arr[p];
    int i=p;
    for(int j=i+1;j<=q;j++){
        if(arr[j]<x){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[p]);
    return i;
}

void quickSort(int arr[],int p,int q){
    if(p<q){
        int m=partition(arr,p,q);
        quickSort(arr,p,m-1);
        quickSort(arr,m+1,q);
    }
}

int main(){
    int arr[]={2,4,1,3,5};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
