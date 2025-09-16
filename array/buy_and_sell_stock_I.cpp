#include <bits/stdc++.h>
using namespace std;

void buysellstock(int arr[],int n){
    int maxprofit=0;
    int minprice=arr[0];
    int tempbuy=0;
    int buy=0;
    int sell=0;
    for(int i=1;i<n;i++){
        if(arr[i]<minprice){
            minprice=arr[i];
            tempbuy=i;
        }
        int profit=arr[i]-minprice;
        if(profit>maxprofit){
            maxprofit=profit;
            buy=tempbuy;
            sell=i;
        }
    }
    cout<<"Buy on day: "<<buy+1<<endl;
    cout<<"Sell on day: "<<sell+1<<endl;
    cout<<"Total profit: "<<maxprofit;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    buysellstock(arr,n);
}
