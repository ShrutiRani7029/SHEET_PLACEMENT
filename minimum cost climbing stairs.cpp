///Memorization -->o(n)
class Solution {
public:
   
    int help(int i,vector<int>&c,vector<int>&dp)
    {
        if(i>=c.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int op1= help(i+1,c,dp);
        int op2= help(i+2,c,dp);
        
        return dp[i]=min(op1,op2) + c[i];
    }
    int minCostClimbingStairs(vector<int>& c) {
        int n=c.size();
        vector<int>dp(n+1,-1);
        return min(help(0,c,dp),help(1,c,dp));// 1 and 2nd step
    }
};

///tabulation -->o(n)
class Solution {
public:
    
    //bottom-up
    int minCostClimbingStairs(vector<int>& c) {
        int n=c.size();
        vector<int>dp(n+1,0);
        dp[0]=c[0];
        dp[1]=c[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+c[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};
