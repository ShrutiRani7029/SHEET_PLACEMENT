int fun(int ind,int w,vector<int>&value,vector<int>&wt, vector<vector<int>>&dp)
{
    //base case
    if(ind==0)return ((int)(w/wt[0])*value[0]);
    if(dp[ind][w]!=-1)return dp[ind][w];
    int nottake=0+fun(ind-1,w,value,wt,dp);
    int take=INT_MIN;
    if(wt[ind]<=w)take=value[ind]+fun(ind,w-wt[ind],value,wt,dp);

    return dp[ind][w]=max(take,nottake);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    // Write Your Code Here.
    vector<vector<int>>dp(n,vector<int>(w+1,-1));
    return fun(n-1,w,profit,weight,dp);
}
