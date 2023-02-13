#include<bits/stdc++.h>
using namespace std;
int func(int arr[], int low, int high)
{
    while(low<high)
    {
        int mid=(low+high)/2;

            if(arr[mid]>arr[high])low=mid+1;
            else high=mid;


    }
    return arr[high];
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<func(arr,0,n-1);
}
