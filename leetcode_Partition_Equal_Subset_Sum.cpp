class solution{
  public:
    bool fun(int ind,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(target==0)return true;
        if(ind==0)return nums[0]==target;
        if(dp[ind][target]!=-1)return dp[ind][target];
        bool not_take=fun(ind-1,target,nums,dp);
        bool take=false;
        if(nums[ind]<=target)take=fun(ind-1,target-nums[ind],nums,dp);
        
        
        return dp[ind][target]=not_take | take;
    }
    bool canPartition(vector<int>& nums) {
       
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        if(total%2)return false;
        else
        {
            int s=total/2;
             vector<vector<int>>dp(n,vector<int>(s+1,-1));
            return fun(n-1,s,nums,dp);
        }
    }
};
