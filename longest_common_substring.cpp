#include<bits/stdc++.h>
using namespace std;
int fun(string &s,string &t)
{
    int n=s.length();
    int m=t.length();
    int ans=0;
    ///substring:- consecutive+order maintain
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)dp[i][0]=0;
    for(int j=1;j<=m;j++)dp[0][j]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==t[j-1])
            {dp[i][j]=1+dp[i-1][j-1];
            ans=max(ans,dp[i][j]);
            }
            else
                dp[i][j]=0;
        }
    }
    return ans;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<fun(s1,s2);
}
