class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //int n=nums.size();
        stack<int> st;
	int n = nums.size();
	int numsk = INT_MIN;
	vector<int> minm(n, 0);
	minm[0] = nums[0];
	for (int i = 1; i < n; ++i)
	{
		minm[i] = min(nums[i], minm[i - 1]);
	}
	for (int i = n - 1; i >= 0; --i)
	{
		while (!st.empty() && st.top() <= minm[i])
		{
			st.pop();
		}
		if(!st.empty()&&nums[i]>st.top()){
			return true;
		}
		st.push(nums[i]);
	}
	return false;
    }
};
