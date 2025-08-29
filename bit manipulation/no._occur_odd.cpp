#include <bits/stdc++.h>
using namespace std;

int getOdd(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getOdd(arr, n);
}
