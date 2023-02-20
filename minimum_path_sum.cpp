class Solution {
public:
int minPathSum(vector<vector<int>>& grid) {
        
        int M=grid.size();
        int N=grid[0].size();
        vector<vector<int>>dp(M, vector<int>(N));
		
        dp[0][0] = grid[0][0];
		
         for(int i=1;i<M;i++)
         dp[i][0] = grid[i][0] + dp[i-1][0];      // only 1 way possible
    
         for(int j=1;j<N;j++)
         dp[0][j] = grid[0][j] + dp[0][j-1];     // only 1 way possible
         
        for(int i=1;i<M;i++)             // min of the 2 ways possible
        {
            for(int j=1;j<N;j++)
                dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
        }
        return dp[M-1][N-1];
    }
};
