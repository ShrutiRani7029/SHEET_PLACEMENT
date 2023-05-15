#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&v)
{
  int n=v.size();
  int minm=v[0],profit=0,cost=0;
  for(int i=1;i<n;i++)
  {
    cost=v[i]-minm;
    profit=max(cost,profit);
    minm=min(minm,v[i]);
  }
  return profit;
}
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  cout<<fun(v);
}
  
