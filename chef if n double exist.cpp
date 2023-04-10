class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        bool ans=false;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==2*arr[j] || arr[j]==2*arr[i])
                {
                    ans=true;
                    break;
                }
            }
        }
        return ans;
    }
};
