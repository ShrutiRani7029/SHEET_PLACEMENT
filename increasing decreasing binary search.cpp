///increasing----(sorting)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;
    cin>>k;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start +(end-start)/2;
        if(arr[mid]==k)
        {cout<<" KEY PRESENT AT INDEX : "<<mid;break;}
        else if (arr[mid]<k)start=mid+1;
        else end=mid-1;
    }
    return 0;
}*/
///decreasing----(sorting)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;
    cin>>k;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start +(end-start)/2;
        if(arr[mid]==k)
        {cout<<" KEY PRESENT AT INDEX : "<<mid;break;}
        else if (arr[mid]<k)end=mid-1;
        else start=mid+1;
    }
    return 0;
}
