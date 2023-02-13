/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
ll n,h;
ll a[N];
bool eat(int m)
{
    ll k=0;
    //int min=INT_MAX;
    cout<<m;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=m)
        {
            k+=1;
        }
        else
        {
            if(a[i]%m==0)
            {
                k+=a[i]/m;
            }
            else
            {
                k+=(a[i]/m)+1;
            }
        }
    }
    return k<=h;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>h;
        //ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx = max(mx, a[i]);
        }
        sort(a,a+n);
        int start=0,end=mx,mid;
        while(end-start<1)
        {
            mid=(start+end)/2;
            if(eat(mid))
            {
                start=mid;
            }
            else
                end=mid-1;
        }
        if(eat(end))cout<<end<<endl;
        else cout<<start<<endl;
    }
}*/

























#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,h;
const int N =1e5+10;
ll b[N];

bool eat(ll med)
{
    ll k = 0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<=med)
        {
            k+=1;
        }
        else
        {
            if(b[i]%med==0)
            {
                k+=b[i]/med;
            }
            else
            {
                k+=(b[i]/med)+1;
            }
        }
    }
    return k <= h;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        // int n;
        cin >> n >> h;


        ll m = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            m = max(m, b[i]);
        }
        //cout<<m;
        ll start = 1, end = m;
        ll res = m;
        while (start<=end)
        {
            ll mid = (start + end) / 2;
            //cout<<mid;
            if (eat(mid))
            {
                res = min(res, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        cout <<res<< endl;
    }
    return 0;
}
