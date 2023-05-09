///Coding ninjas
#include<bits/stdc++.h>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(),arr.end());
	///2,5,6,7
	vector<int>ans;
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
	///1 2 4 5
	///4 2
	return ans;
}
