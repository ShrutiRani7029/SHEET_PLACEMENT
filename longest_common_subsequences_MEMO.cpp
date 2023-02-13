#include<bits/stdc++.h>
using namespace std;
int ffun(int i, int j,string s1,string s2,vector<vector<int>>dp)
{
    if(i==0 || j==0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    //take
    if(s1[i-1]==s2[j-1])return dp[i][j]=1+ffun(i-1,j-1,s1,s2,dp);
    return dp[i][j]=max(ffun(i-1,j,s1,s2,dp),ffun(i,j-1,s1,s2,dp));
}
int fun(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return ffun(n,m,s1,s2,dp);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<fun(s1,s2);
    return 0;
}
