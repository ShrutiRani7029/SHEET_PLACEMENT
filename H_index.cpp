class Solution {
public:
    int hIndex(vector<int>& c) {
        int ans=0;
        int n=c.size();
        sort(c.begin(),c.end());/// 0,1,3,5,6
        for(int i=c.size()-1;i>=0;i--) {
            if(c[i]>=n-i) {
                //6>=5-4///5>=2///3>=3
                  ans++;///1
            }  
        }
        return ans;
    }
};
