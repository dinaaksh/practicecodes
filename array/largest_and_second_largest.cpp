#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=INT_MIN;
    int seclargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>seclargest&&arr[i]!=largest){
            seclargest=arr[i];
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Second largest element is: "<<seclargest<<endl;
}
