class Solution {
public:
int numberfinding(int n)
{
    if(n<10)return 1;
    int s=numberfinding(n/10);
    return 1+s;
}
    int findNumbers(vector<int>& nums) {
        int count=0;
        ///12,345,2,6,7896
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int temp=numberfinding(nums[i]);
            if(temp%2==0)count++;
        }
        return count;
        
    }
};
