#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    if(ch=='^') return 3;
    if(ch=='*'||ch=='/') return 2;
    if(ch=='+'||ch=='-') return 1;
    else return -1;
}

void infixtopostfix(string s){
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            result+=ch;
        }
        else if(ch=='('){
            st.push('(');
        }
        else if(ch==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(ch=='^'){
                while(!st.empty()&&precedence(s[i])<precedence(st.top())){
                    result+=st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty()&&precedence(s[i])<=precedence(st.top())){
                    result+=st.top();
                    st.pop();
                }
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    cout<<"Postfix Expression: "<<result<<endl;
}

int main() {
  string exp = "a^b^c";
  cout << "Infix expression: " << exp << endl;
  infixtopostfix(exp);
  return 0;
}
