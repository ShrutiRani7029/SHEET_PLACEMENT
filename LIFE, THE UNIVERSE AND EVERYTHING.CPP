///HACKEREARTH---
include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	
	ll a[10000];
	
	for(ll i=0;i<10000;i++)cin>>a[i];
	for(ll i=0;i<10000;i++)
	{
      if(a[i]==42)
	  {
		break;
	  }
	  else{
		cout<<a[i]<<endl;
	  }
	}
	return 0;
}
