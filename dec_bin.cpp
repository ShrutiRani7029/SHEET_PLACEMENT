
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,rem=0;
    cin>>n;
    int a[n];
    int i=0;
    while(n)
    {
       rem=n%2;
       n=n/2;
       a[i] =rem;
       i++;
    }

    for(int j=i-1;j>=0;j--)
    {
       cout<<a[j];


    }
    cout<<endl;
    }
}
