    #include <bits/stdc++.h>
    using namespace std;
    
    void reverse(int arr[],int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    
    void rightrotatebyk(int arr[],int n,int k){
        k=k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
    }
    
    int main(){
        int arr[]={1,2,2,4,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        int k=3;
        rightrotatebyk(arr,n,k);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
