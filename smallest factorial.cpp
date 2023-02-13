#include<bits/stdc++.h>
using namespace std;
bool num(int mid, int n)
{
    int temp=mid,count=0,f=5;
    while(f<=temp)
    {
        count+=temp/f; f=f*5;
    }
    return (count>=n);
}
int findsmallestfactorial(int n)
{
    if(n==1)
        return 5;
    int start=0,end=5*n;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(num(mid,n))
        {
            end=mid;
        }
        else start=mid+1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<findsmallestfactorial(n)<<endl;
    }
}
