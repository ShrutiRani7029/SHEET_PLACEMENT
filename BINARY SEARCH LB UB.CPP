///----> 1st normal binary search that element +nt or not
///---->2nd find lower_bound of element
///---->find upper_bound of element

#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&v,int element)
{
    int start=0,end=v.size()-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(v[mid]<element) start=mid+1;
        else end=mid;
    }
    if(v[start]>=element)return start;
    if(v[end]>=element)return end;
    return -1;
}

int upper_bound(vector<int>&v,int element )
{
    int start=0,end=v.size()-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(v[mid]<=element) start=mid+1;
        else end=mid;
    }
    if(v[start]>element)return start;
    if(v[end]>element)return end;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int element;
    cin>>element;
    //int start=0,end=n-1;
    /*while(start<=end)
    {
        int mid=(start+end)/2;
        if(v[mid]<element)start=mid+1;
        else end=mid;
    }
    if(v[start]==element)cout<<"ELEMENT PRESENT AT INDEX"<<" : "<< start<<endl;
    else if(v[end]==element)cout<<"ELEMENT PRESENT AT INDEX"<<" : "<< end<<endl;
    else cout<<"ELEMENT NOT FOUND"<<endl;*/
    int lb=lower_bound(v,element);
     cout<<lb<<" "<<(lb!=-1?v[lb]:-1)<<endl;
    int ub=upper_bound(v,element);

    cout<<ub<<" "<<(ub!=-1?v[ub]:-1)<<endl;
}
