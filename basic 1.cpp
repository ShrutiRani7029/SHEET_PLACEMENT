/*#include<bits/stdc++.h>///-----ASCENDING ORDER
using namespace std;
int bin(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(key==a[mid])return mid;
        else if(key<a[mid])end=mid-1;
        else start=mid+1;

    }
    return -1;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int key; cin>>key;
    cout<<"element present at index : "<<bin(a,10,key);

}*/
#include<bits/stdc++.h>///-----DESCENDING ORDER
using namespace std;
int bin(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(end-start>1)
    {
        int mid=start+((end-start)/2);
        if(key==a[mid])return mid;
        else if(key<a[mid])
        {
            ///end=mid-1;
            start=mid+1;

        }
        else
        {
            ///start=mid+1;
            end=mid-1;
        }

    }
    return -1;
}
int main()
{
    int a[12]={100,80,68,52,39,31,29,20,15,11,8,2};
    int key; cin>>key;
    cout<<"element present at index : "<<bin(a,12,key);

}
