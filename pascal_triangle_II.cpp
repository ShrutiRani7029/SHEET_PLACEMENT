class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0;i<rowIndex+1;i++)
        {
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(row);
        }
        return ans[rowIndex];
    }
};
