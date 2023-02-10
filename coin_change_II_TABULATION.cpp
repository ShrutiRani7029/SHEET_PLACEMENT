class Solution {
public:
   
   int change(int x, vector<int>& num) {
        int n=num.size();
    vector<vector<long>>dp(n,vector<long>(x+1,0));

    //b-c
    for(int i=0;i<=x;i++)
    {
        dp[0][i]= (i%num[0]==0);
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
             long nt=dp[i-1][j];
             long take=0;
            if(num[i]<=j)
            take=dp[i][j-num[i]];

            dp[i][j]=nt+take;
        }
    }
    return dp[n-1][x];
    
    }
};
