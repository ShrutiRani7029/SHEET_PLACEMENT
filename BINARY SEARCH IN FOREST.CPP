#include<bits/stdc++.h>
using namespace std;
int forest(int tree[],int n,int h)
{
    int wood=0;
    for(int i=0;i<n;i++)
    {
        if(tree[i]>=h)
        {
            wood+=(tree[i]-h);
        }
    }
    return wood;
}
int find_height(int tree[],int n, int k)
{
    if(n==1)
    {
        return tree[0]-k;
    }
    sort(tree,tree+n);
    long long start=tree[0],end=tree[n-1];
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(forest(tree,n,mid)==k) return mid;
        else if(forest(tree,n,mid)>k)start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int tree[n];
        for(int i=0;i<n;i++)
        {
            cin>>tree[i];
        }
        cout<<find_height(tree,n,k)<<endl;
    }
}
