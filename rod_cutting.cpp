int fun(int ind,vector<int>&value,int n,vector<vector<int>>&dp)
{
	///Base Condition
	
	if(ind==0)
	{
		return (n*value[0]);
	}
	if(dp[ind][n]!=-1)return dp[ind][n];
	int nottake=0+fun(ind-1,value,n,dp);
	int take=INT_MIN;
	int rodlength=ind+1;
	if(rodlength<=n)
	{
		take=value[ind]+fun(ind,value,n-rodlength,dp);
	}
	return dp[ind][n]=max(take,nottake);
}

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>>dp(n,vector<int>(n+1,-1));
	return fun(n-1,price,n,dp);
}
