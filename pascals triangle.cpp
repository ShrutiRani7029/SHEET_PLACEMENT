#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>fun(int n)
{
  vector<vector<int>>ans;
  
  for(int i=0;i<n;i++)
  {
    vector<int>rows(i+1,1);
    for(int j=1;j<=i;j++)
    {
      rows[j]=ans[i-1][j-1] + ans[i-1][j];
    }
    ans.push_back(rows);
  }
  return ans;
}

int main()
{
  int n;
  cin>>n;
  vector<vector<int>>ans=fun(n);
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<=i;j++)
      cout<<ans[i][j]<<" ";
      cout<<endl;
  }
  
  return 0;
}
