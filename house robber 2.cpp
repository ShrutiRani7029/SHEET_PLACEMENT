class Solution {
public:

int fun(vector<int>&v,vector<int>&dp ){

    dp[0]=v[0];
    int n=v.size();
    for(int i=1;i<n;i++){
        int pick=v[i];
        if(i>1)pick+=dp[i-2];
        int np=0+dp[i-1];

        dp[i]=max(pick,np);
    }
    return dp[n-1];

}
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];

        vector<int>dp(n,-1);
        vector<int>temp1,temp2;
        for(int i=0;i<n;i++){
          if(i!=0)temp1.push_back(nums[i]);
          if(i!=n-1)temp2.push_back(nums[i]);
          

        }
        return max(fun(temp1,dp),fun(temp2,dp));
    }
};
