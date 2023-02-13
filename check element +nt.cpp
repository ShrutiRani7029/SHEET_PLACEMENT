///check element is present or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   /* vector<int>v;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }*/
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int flag=1;
    int start=0,end=n-1;
    int element;
    cin>>element;
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(v[mid]==element)
        {
            flag=0;
            cout<<"YES";
            break;
        }
        else if(v[mid]<element)
            start=mid+1;
        else
            end=mid-1;
    }
    if(flag)cout<<"NO";//if flag=1 then no element is present.
}
