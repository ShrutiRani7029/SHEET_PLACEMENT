#include<bits/stdc++.h>
using namespace std;
int save_gotham(int a[],int n)
{
    stack<int>st;
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && a[i]>=st.top())
        {
           st.pop();
        }
           if(st.empty())
            sum+=0;
           else
            sum+=st.top();
  st.push(a[i]);

    }
    return sum;
}
int main()
{
    stack<int>st,aux;
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<save_gotham(arr,n);
}
