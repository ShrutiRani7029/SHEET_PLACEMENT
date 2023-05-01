class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
       
        double total=0;
        for(int i=1;i<n-1;i++){
            total+=salary[i];
        }
        double ans=total/(n-2);
        return ans;
    }
};
