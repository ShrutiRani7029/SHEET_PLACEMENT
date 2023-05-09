void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	for(int i=0;i<m/2;i++)
	{
		swap(arr[i],arr[m-i-1]);
	}
	
}
