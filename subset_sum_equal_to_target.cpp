#include <bits/stdc++.h> 
/*
///Memorization
bool fun(int ind, int target, vector<int>& arr,vector<vector<int>>&dp){
   if(target==0)return true;
   if(ind==0)return arr[0]==target;
   if(dp[ind][target]!=-1)return dp[ind][target];
   bool not_take=fun(ind-1,target,arr,dp);
   bool take=false;
   if(arr[ind]<=target)take=fun(ind-1,target-arr[ind],arr,dp);

   return dp[ind][target]=not_take|take;
}

bool subsetSumToK(int n, int k, vector<int> &arr){
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return fun(n-1,k,arr,dp);
}
*/
/*
bool subsetSumToK(int n,int k,vector<int>&arr)
{
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++)dp[i][0]=true;
    
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            bool not_take=dp[i-1][j];
            bool take=false;
            if(arr[i]<=j)take=dp[i-1][j-arr[i]];

            dp[i][j]=not_take || take;
        }
    }
    return dp[n-1][k];///bottom up

}
*/
///space optimization
bool subsetSumToK(int n,int k,vector<int>&arr)
{
    vector<bool>prev(k+1,0),cur(k+1,0);
    prev[0]=cur[0]=true;
    prev[arr[0]]=true;

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            bool not_take=prev[j];
            bool take=false;
            if(arr[i]<=j)take=prev[j-arr[i]];

            cur[j]=not_take || take;

        }
        prev=cur;
    }
    return prev[k];
}








