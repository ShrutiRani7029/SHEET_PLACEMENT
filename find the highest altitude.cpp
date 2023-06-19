class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>ans(n+1);

        ans[0]=0;
        int k=0;
        for(int i=1;i<n+1;i++)
        {
           ans[i]=k+gain[i-1];///ans[1]=0+(-5)=-5///ans[2]=(-5)+1=-4
           k=ans[i];
        }
        int mx=INT_MIN;
        for(int i=0;i<n+1;i++)
        {
             if(ans[i]>mx)
             {
                 mx=ans[i];
             }
        }
        return mx;
        
    }
};
