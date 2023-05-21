#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>& arr, int k) {
        int n=arr.size();
        int s;
        int m=INT_MIN;

        long long i=1,j=0;
        int count=0;
        while(i<=1000)
        {
          if(i!=arr[j])///2,3,4,7,11
            {
                count++;//1//2//3//4//5

                if(count==k)//--
                {
                    s=i;//9
                    break;
                }
                i++;//2//6//7//9
            }
            else
            {j++;//1//2//3//4
            i++;
            }//3//4//5//8
        }
        return s;
    }
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cin>>k;
    cout<<fun(v,k);
}
