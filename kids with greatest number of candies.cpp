class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
       int mx =0;
        vector<bool> ans;
        for(int a : c ) mx =max(mx,a);
        for(int a : c){
            if(a+e >= mx) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
