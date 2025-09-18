#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> arr,int n){
    int low=0,high=n-1;
    int ans=INT_MIN;
    while(low<=high){
        int area=min(arr[low],arr[high])*(high-low);
        ans=max(area,ans);
        if(arr[low]<arr[high]) low++;
        else high--;
    }
    return ans;
}

int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int n=arr.size();
    int result=maxArea(arr,n);
    cout<<result;
}
