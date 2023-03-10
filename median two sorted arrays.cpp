class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //int n1=nums1.size();
        //int n2=nums2.size();
        //int n=n1+n2;
        vector<int>ans;
        for(auto num:nums1)
        ans.push_back(num);
        for(auto num:nums2)
        ans.push_back(num);
       // int n=ans.size();
        sort(ans.begin(),ans.end());
        //[1,2,3]
        int n=ans.size();
        
        return n%2?ans[n/2]:(ans[n/2-1]+ans[n/2])/2.0;
        
        
        
    }
};
