class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
       
       int n=nums.size();
       vector<pair<int,int>>v(n);
       for(int i=0;i<n;i++)
       {
           v[i].first=nums[i];
           v[i].second=i;
       }
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(v[i].first +t>=v[j].first)
               {
                   if(abs(v[i].second-v[j].second)<=k)
                   {
                       return true;
                   }
               }
               else break;
           }
       }
       return false;
    }
};
