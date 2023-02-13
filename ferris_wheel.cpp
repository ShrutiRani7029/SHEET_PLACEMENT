#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,count=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int start=0,end=n-1;
    while(start<=end)
    {
        if(a[start]+a[end]<=x)
        {
           count++;
           start++;
           end--;
        }
        else
        {
            count++;
            end--;
        }
    }
    cout<<count;

}
