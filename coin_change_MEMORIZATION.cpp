class Solution {
public:
   int f(int ind,vector<int>&num,int tar,vector<vector<int>>&dp)
{
   if(ind==0)
   {
       if(tar%num[0]==0)return tar/num[ind];
       else return 1e9;
   }
   if(dp[ind][tar]!=-1)return dp[ind][tar];
   ///nottake
   int nt=0+f(ind-1,num,tar,dp);
   ///take
   int take=INT_MAX;
   if (num[ind] <= tar) {
     take = 1 + f(ind, num, tar - num[ind], dp);
   }

   return dp[ind][tar]=min(take,nt);
}
    int coinChange(vector<int>& num, int x) {
        int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans= f(n-1,num,x,dp);
    if(ans>=1e9)return -1;
    else return ans;
        
    }
