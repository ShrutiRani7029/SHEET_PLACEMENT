class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        int sum=0;
        for(int i=0;i<n;i++)
           sum+=mat[i][i] + mat[i][n-i-1];
           //if odd then middle one taken only one time
           if(n%2!=0)
           sum-=mat[n/2][n/2];
        
        return sum;
    }
};
