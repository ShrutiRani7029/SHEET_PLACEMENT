#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool findpair(int a[],int size,int n)
{
    sort(a,a+size);
   /* int k=0,count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            k=abs(arr[i]-arr[j]);
            //cout<<k<<" ";
        if(k==n)
        {
            count=1;
        }
        }

    }
    return count>0;*/
    int i=0,j=1,count=0;
    while(i<size && j<size)
    {
    if(a[j]-a[i]==n  && i!=j )
      return true;
        else if(a[j]-a[i]<n)
        j++;
        else
        i++;
    }
    return false;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
        {
            cin>>arr[i];
        }
        if(findpair(arr,l,n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
}
