
int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
	int k=0;
	for(int i=0;i<n;i++)k+=arr[i];
	

	vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++)dp[i][0]=true;
    
    if(arr[0]<=k)dp[0][arr[0]]=true;
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
    //return dp[n-1][k];///bottom up
	int mini=1e9;
	int s1,s2;
	for(int i=0;i<=k/2;i++)
	{
        if(dp[n-1][i]==true)
		{
          s1=i;
		  s2=k-i;
		}
	}
	mini=min(mini,abs(s2-s1));
	return mini;
}
