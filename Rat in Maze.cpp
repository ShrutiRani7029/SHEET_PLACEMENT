
class Solution{
    public:
    vector<string>ans;
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        func(m,n,0,0,"");
        return ans;
    }
    void func(vector<vector<int>> &m,int n,int i, int j, string curr) 
    {
        
        if(i==n-1 && j==n-1)
        {
            if(m[i][j]==1)
            {
                ans.push_back(curr);
            }
            return;
        }
        if(i<0 || j<0 ||i>=n || j>=n || m[i][j]==0) return;
        else m[i][j]=0;
        func(m,n,i,j+1,curr+'R');
        func(m,n,i,j-1,curr+'L');
        func(m,n,i+1,j,curr+'D');
        func(m,n,i-1,j,curr+'U');
        m[i][j]=1;
        
    }
    
};
