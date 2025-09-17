#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> arr,int k){
    int n=arr.size();
    int left=0,right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==k)return true;
        else if(sum<k)left++;
        else{
            right--;
        }
    }
    return false;
}

int main(){
    vector<int> arr={2,6,5,8,11};
    int k=14;
    cout<<(twoSum(arr,k)?"Yes":"No");
}
