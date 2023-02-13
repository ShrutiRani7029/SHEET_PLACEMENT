
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int flag=1;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(v[i]==mid)
        {
            cout<<"YES";
            flag=0;
            break;
        }
        else if(v[i]<mid)
            end=mid-1;
        else
            start=mid+1;
    }
    if(flag)cout<<"NO";//if flag=1 then no element is present.
}
