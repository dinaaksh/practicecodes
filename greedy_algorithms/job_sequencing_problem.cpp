#include <bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int deadline;
    int profit;
};

bool compare(Job a,Job b){
    return a.profit>b.profit;
}

pair<int,int> jobSequencing(Job arr[],int n){
    sort(arr,arr+n,compare);
    vector<bool> slot(n,false); 
    int profit=0, count=0;
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].deadline)-1;j>=0;j--){
            if(!slot[j]){
                slot[j]=true;
                count++;
                profit+=arr[i].profit;
                break;
            }
        }
    }
    return {count,profit};
}

int main(){
   int n=4;
   Job arr[n]={{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
   pair<int,int> ans=jobSequencing(arr,n);
   cout<<ans.first<<" " <<ans.second<<endl;
} 
