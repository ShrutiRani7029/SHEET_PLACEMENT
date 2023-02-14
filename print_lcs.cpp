///print longest common subsequences
///subsequences : not necessary to be consecutive in nature but order should be maintained.

#include<bits/stdc++.h>
using namespace std;

int fun(string &s, string &t)
{
    int n=s.length();
    int m=t.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int j=1;j<=m;j++)dp[0][j]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int len=dp[n][m];
    string ans=" ";
    for(int i=0;i<=len;i++)
    {
        ans+=" ";
    }
    int index=len-1;
    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(s[i-1]==t[j-1]){
        ans[index]=s[i-1];
        index--;
        i--;
        j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
    cout<<ans;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    fun(s1,s2);
}
