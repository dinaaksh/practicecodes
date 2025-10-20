#include <bits/stdc++.h>
using namespace std; 

struct Item{
   int value;
   int weight;
};

bool compare(Item a,Item b){
    double r1=(double)a.value/(double)a.weight;
    double r2=(double)b.value/(double)b.weight;
    return r1>r2;
}

double fractionalKnapsack(int weight, Item arr[],int n){
    double profit=0.0;
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        if(arr[i].weight<=weight){
            profit+=arr[i].value;
            weight-=arr[i].weight;
        }
       else{
           profit+=arr[i].value*((double)weight/arr[i].weight);
           break;
       }
    }
    return profit;
}

int main(){
   int n=3,weight=50;
   Item arr[n]={{100,20},{60,10},{120,30}};
   double ans=fractionalKnapsack(weight, arr, n);
   cout<<"The maximum value is "<<setprecision(2)<<fixed<<ans;
}
