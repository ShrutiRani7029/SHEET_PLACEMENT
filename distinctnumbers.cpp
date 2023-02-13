#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>mp;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {cin>>a;
    mp.insert(a);
    }
    cout<<mp.size()<<endl;



}

