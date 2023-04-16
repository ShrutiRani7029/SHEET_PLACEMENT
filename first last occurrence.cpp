#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int k)
{
    int s=0,e=n-1;
    int res=-1;
    while(s<=e)
    {
        int mid= s + (e-s)/2;
        if(arr[mid]<k)s=mid+1;
        else if(arr[mid]>k)e=mid-1;
        else
        {
            res=mid;
            e=mid-1;
        }
    }
    return res;
}
int last(int arr[],int n, int k)
{
    int s=0,e=n-1;
    int res=-1;
    while(s<=e)
    {
        int mid= s + (e-s)/2;
        if(arr[mid]<k)s=mid+1;
        else if(arr[mid]>k)e=mid-1;
        else
        {
            res=mid;
            s=mid+1;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;
    cin>>k;
    cout<<"FIRST OCCURRENCE : "<<first(arr,n,k)<<endl;
    cout<<"LAST OCCURRENCE : "<<last(arr,n,k)<<endl;
    return 0;
}
