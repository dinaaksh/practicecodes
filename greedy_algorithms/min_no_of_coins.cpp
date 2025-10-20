#include <bits/stdc++.h>
using namespace std; 

int main(){
    int V=49;
    int coins[]={1,2,5,10,20,50,100,500,1000};
    int n=9;
    vector<int> ans;
    for(int i=n;i>=0;i--){
        while(coins[i]<=V){
            V-=coins[i];
            ans.push_back(coins[i]);
        }
        if(V==0) break;
    }
    cout<<"The minimum number of coins is "<<ans.size()<<endl;
    cout<<"The coins are "<<endl;
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
