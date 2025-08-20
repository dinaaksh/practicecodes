#include <bits/stdc++.h>
using namespace std;
int countBits(int n){
    int count=0;
    while(n>0){
        count++;
        n&=n-1;
    }
    return count;
}

int flipsCount(int a,int b){
    return countBits(a^b);
}

int main()
{
    int a=5,b=10;
    cout<<flipsCount(a,b);
}
