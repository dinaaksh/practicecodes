#include <bits/stdc++.h>
using namespace std;

bool twoDiff(vector<int> arr,int k){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0,j=1;
    while(j<n){
        int diff=arr[j]-arr[i];
        if(diff==k)return true;
        else if(diff<k)j++;
        else i++;
        if(i==j) j++;
    }
    return false;
}

int main(){
    vector<int> arr ={5,20,3,2,50,80};
    int k=78;
    cout<<(twoDiff(arr,k)?"Yes":"No");
}
