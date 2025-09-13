#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
