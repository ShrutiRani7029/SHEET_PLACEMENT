class Solution {
public:


//-------------------TABULATION--------------------------

    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();

        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        //return f(n,m,word1,word2,dp);
        for(int i=0;i<=n;i++)dp[i][0]=i;
        for(int j=0;j<=m;j++)dp[0][j]=j;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
                else 
                dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
        return dp[n][m];
    }


};
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1,s2;
    cin>>s1>>s2;
    cout<<minDistance(s1,s2)<<endl;
  }
}
