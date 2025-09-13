#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> arr){
    int XOR1=0,XOR2=0;
    int n=arr.size();
    for(int i=0;i<=n;i++){
        if(i<n){
            XOR1^=arr[i];
        }
        XOR2^=(i+1);
    }
    return XOR1^XOR2;
}

int main(){
    vector<int> arr={1,2,4,5};
    int result=missingNumber(arr);
    cout<<result;
}
