class Solution {
public:
    long long f(int ind,vector<int>&num,int tar,vector<vector<int>>&dp)
{
   if(ind==0)
   {
       
       return (tar%num[0]==0);
   }
   if(dp[ind][tar]!=-1)return dp[ind][tar];
   ///nottake
   long long nt=f(ind-1,num,tar,dp);
   ///take
   long long take=0;
   if (num[ind] <= tar) {
     take = f(ind, num, tar - num[ind], dp);
   }

   return dp[ind][tar]=take+nt;
}
    int change(int x, vector<int>& num) {
        int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans= f(n-1,num,x,dp);
    return ans;
    
    }
    };
