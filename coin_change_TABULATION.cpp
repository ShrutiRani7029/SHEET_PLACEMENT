class Solution {
public:

///tabulation-----
    int coinChange(vector<int>& num, int x) {
        int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,0));
    //bc
    for(int i=0;i<=x;i++)
    {
        if(i%num[0]==0)dp[0][i]=i/num[0];
        else dp[0][i]=1e9;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            int nt=0+dp[i-1][j];
            int take=INT_MAX;
            if(num[i]<=j)take=1+dp[i][j-num[i]];

            dp[i][j]=min(take,nt);
        }
    }
    int ans= dp[n-1][x];
    if(ans>=1e9)return -1;
    else return ans;
    }
};
