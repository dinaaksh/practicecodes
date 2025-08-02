#include <bits/stdc++.h>
using namespace std;

bool checkParenthesis(string s){
    stack<char> stack1;
    for(char a: s){
        if(a=='('||a=='{'||a=='[') stack1.push(a);
        else{
            if(stack1.empty()) return false;
            char ch=stack1.top();
            stack1.pop();
            if((ch=='('&&a==')')||(ch=='{'&&a=='}')||(ch=='['&&a==']')) continue;
            else return false;
        }
    }
    return stack1.empty();
}

int main()
{
    string s="((([[[]]])))";
    cout<<(checkParenthesis(s)?"Balanced":"Unbalanced")<<endl;
}
