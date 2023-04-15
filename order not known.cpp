///we know that array is in sorted order but we don't know the order i.e., ascending/descending.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n>1)
    {
        if(arr[0]>arr[1])cout<<"Descending order"<<endl;
        else if(arr[0]<arr[1])cout<<"Ascending order"<<endl;
    }

}
