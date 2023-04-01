class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    
    int i = 0, j = 0;

    
    while (i < nums1.size() && j < nums2.size()) {
       
        if (nums1[i] == nums2[j]) {
            return nums1[i];
        }
        
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    int a=nums1[0],b=nums2[0];
        if(a==b)return a;
        else if(a>b)
        {
            swap(a,b);
        }
        return a*10 +b;
   
   // return min(nums1[0], nums2[0]);
    }
};
