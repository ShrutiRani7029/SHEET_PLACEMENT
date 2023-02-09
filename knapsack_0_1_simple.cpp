int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,0));
	for(int w=weight[0];w<=maxWeight;w++)
	{
		dp[0][w]=value[0];
	}
	for(int ind=1;ind<n;ind++)
	{
		for(int w=0;w<=maxWeight;w++)
		{
			int nottake=0+dp[ind-1][w];
			int take=INT_MIN;
			if(weight[ind]<=w)take=value[ind]+dp[ind-1][w-weight[ind]];
			dp[ind][w]=max(take,nottake);
		}
	}
	return dp[n-1][maxWeight];
}
