#include<bits/stdc++.h>
using namespace std;
int mySqrt() {
        int x;
        cin>>x;
        int start=1;
        int end=x;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x) end=mid-1;
            else start=mid+1;
        }
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       cout<<mySqrt();
    }
}
