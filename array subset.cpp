#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
   int i=0,j=0,count=0;

    /*if(n<m)
    {
     while(i<n && j<m)
     {
         cout<<a1[i]<<" "<<a2[j];
         if(a2[j]==a1[i])
         {
             j++;
             i++;
             count++;
         }
         else {
            i++;
         }

     }
    }
    cout<<count;
    if(count==m)
        return "yes";
    else return "no";*/
        sort(a1,a1+n);
        sort(a2,a2+m);
      //int i=0,j=0;
      while(a1[i]<=a2[j] && j<m)
      {
          if(a1[i]<a2[j])i++;
          if(a2[j]==a1[i])
         {
             j++;
             i++;
             count++;
         }


      }
      if(count==m)
        return "Yes";
    else return "No";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
       cout<<isSubset(a,b,n,m)<<endl;
        //isSubset(a,b,n,m);
    }
    return 0;
}
