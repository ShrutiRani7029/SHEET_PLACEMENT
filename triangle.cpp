class Solution {
public:
        int solve(int i, int j, vector<vector<int>>&nums , vector<vector<int>>& dp)
    {
        if(i==nums.size()-1)
        return nums[i][j];
        if(dp[i][j]!=-1)
        return dp[i][j];
        return dp[i][j]=nums[i][j]+min(solve(i+1,j,nums,dp), solve(i+1,j+1,nums,dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,0,triangle,dp);
    }
};
