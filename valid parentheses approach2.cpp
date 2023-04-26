#include<bits/stdc++.h>
using namespace std;

bool valid(string s){
stack<char>st;
for(int i=0;i<s.size();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
    else if(s[i]==')' || s[i]=='}' || s[i]==']')
    {
        if(st.empty())return false;
        else if(s[i]==')'&& st.top()!='(')return false;
        else if(s[i]=='}' && st.top()!='{')return false;
        else if(s[i]==']'&& st.top()!='[')return false;
        else st.pop();
    }

}
if(st.empty())return true;
else return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(valid(s))cout<<"yes valid parentheses"<<endl;
        else cout<<"not a valid parentheses"<<endl;
    }
}
