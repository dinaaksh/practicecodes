#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=2,b=3;
    cout<<"Before swapping: "<<a<<" & "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping: "<<a<<" & "<<b;
}
