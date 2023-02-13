#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
          //  cout<<a[i]<<"->"<<j<<" "<<endl;
            if(a[i]%j==0)
            {
                count++;
            }
        }
        //cout<<count;
        if(count==3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        count=0;
        /*if(count==n)
        cout<<"yes";
        else
        cout<<"no";*/

    }

}
