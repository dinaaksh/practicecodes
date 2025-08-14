#include <bits/stdc++.h>
using namespace std;

int precedence(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-')return 1;
    else return -1;
}

string reversal(string s){
    int n=s.size();
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            s[i]=')';
        }
        else if(s[i]==')'){
            s[i]='(';
        }
    }
    return s;
}

void infixtoprefix(string s){
    string input=reversal(s);
    string temp="";
    stack<char> st;
    for(int i=0;i<input.size();i++){
        char ch=input[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            temp+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty()&&st.top()!='('){
                temp+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(ch=='^'){
                while(!st.empty()&&precedence(st.top())>precedence(ch)){
                    temp+=st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty()&&precedence(st.top())>precedence(ch)){
                    temp+=st.top();
                    st.pop();
                }
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        temp+=st.top();
        st.pop();
    }
    string output=reversal(temp);
    cout<<"Infix to Prefix expression: "<<output<<endl;
}

int main() {
    string input="((a+b)*(c-d)+e^f)/(g+h*i)-j";
    cout<<"Infix expression: "<<input<<endl;
    infixtoprefix(input);
}
