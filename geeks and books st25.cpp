#include<bits/stdc++.h>
using namespace std;
stack<string>st;
int push(string x)
{
    st.push(x);
}
int pop()
{
    string s="";
    while(!st.empty()){
        s=st.top();
        st.pop();
    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    while(n--)
    {
    string querytype;
    cin>>querytype;
    if(querytype=="place")
    {
        string a;
        cin>>a;
        push(a);
    }
    else
    {
        pop();
    }
    }

    }

}
