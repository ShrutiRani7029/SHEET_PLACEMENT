class Solution {
public:
int fun(int j,int i,string &s,string &p, vector<vector<int>>&dp)
{
    if(i<0 && j<0)return true;
    if(i<0 && j>=0)return false;
    if(j<0 && i>=0)
    {
        for(int k=0;k<=i;k++)
        {
            if(p[k]!='*')return false;
        }
        return true;
    }
    if(dp[j][i]!=-1)return dp[j][i];
    if(p[i]==s[j] || p[i]=='?')return dp[j][i]=fun(j-1,i-1,s,p,dp);
    if(p[i]=='*')
    {
        return dp[j][i]=fun(j,i-1,s,p,dp) | fun(j-1,i,s,p,dp);
    }
    return dp[j][i]=false;

}
    bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();

        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return fun(n,m,s,p,dp);
    }
};
