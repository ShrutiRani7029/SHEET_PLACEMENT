#include<bits/stdc++.h>
using namespace std;
bool valid(string s)
{
 unordered_map<char,int>symbol={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
 stack<char>st;
 for(char c:s){
    if(symbol[c]<0)st.push(c);
    else
    {
        if(st.empty())return false;
        char top=st.top();
        st.pop();
        if(symbol[top]+symbol[c]!=0)return false;
    }
 }
 if(st.empty())return true;
 else return false;
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
