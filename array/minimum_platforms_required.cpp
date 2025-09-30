#include<bits/stdc++.h>
using namespace std;

int minPlatform(vector<int> &arr,vector<int> &dep){
    int n=arr.size();
    if(n==0)return 0;
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int platforms=1;
    int maxplatforms=1;
    int i=1;
    int j=0;
    while(i<n&&j<n){
        if(arr[i]<=dep[j]){
            platforms++;
            i++;
        }
        else{
            platforms--;
            j++;
        }
        maxplatforms=max(maxplatforms,platforms);
    }
    return maxplatforms;
}

int main(){
    vector<int> arr={900, 940, 950, 1100, 1500, 1800};
    vector<int> dep={910, 1200, 1120, 1130, 1900, 2000};
    cout<<minPlatform(arr,dep);
}
