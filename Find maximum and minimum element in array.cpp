///Coding Ninjas
#include<bits/stdc++.h>
using namespace std;

int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int mx=INT_MIN;
	int mn=INT_MAX;

	for(int i=0;i<n;i++)
	{
		if(arr[i]<mn)mn=arr[i];
		if(arr[i]>mx)mx=arr[i];
	}
	return mn+mx;
}
