#include<bits/stdc++.h>
using namespace std;
int fun(int n,int w,vector<int>&value,vector<int>&wt)
{
    vector<vector<int>>dp(n,vector<int>(w+1,0));
    ///basecase
    for(int i=0;i<=w;i++)
    {
        dp[0][i]= (int)(i/wt[0])*value[0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            int nottake=0+dp[i-1][j];
            int take=0;
            if(wt[i]<=j)
            take= value[i] + dp[i][j-wt[i]];

            dp[i][j]=max(take,nottake);
        }
    }
    return dp[n-1][w];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,w;
    cin>>n>>w;
    vector<int>v(n);
    vector<int>wt(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>wt[i];
    cout<<fun(n,w,v,wt)<<endl;
    }
}
