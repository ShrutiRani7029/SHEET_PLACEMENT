class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        if(n<3)return false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)count++;
            else count=0;
            if(count==3)
            {
                return true;
                break;
            }
        }
        return false;
    }
};
