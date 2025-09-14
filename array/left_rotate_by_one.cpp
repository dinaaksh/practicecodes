    #include <bits/stdc++.h>
    using namespace std;
    
    void leftrotate(int arr[],int n){
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    
    int main(){
        int arr[]={1,2,2,4,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        leftrotate(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
