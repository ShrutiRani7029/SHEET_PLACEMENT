///Generate Parentheses
#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void generates(string &s, int open ,int close){

if(open==0 && close==0){
    ans.push_back(s);
    return;
}
///condition1: (
///condition2:  )
if(open>0)
{
    s.push_back('(');
    generates(s,open-1,close);
    s.pop_back();
}

if(close>open)
{
        s.push_back(')');
        generates(s,open,close-1);
        s.pop_back();
}
}
vector<string>fun(int n)
{
    string s;
    generates(s,n,n);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<string>ans=fun(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    }
}


