///There are total 4 concepts in Bit Manipulation.
///1.Get Bit 2. Set Bit 3.Clear Bit 4.Update Bit.
///GET BIT : CHECK THAT AT GIVEN POSITION NO. BE 1 BIT OR 0 BIT.
#include<bits/stdc++.h>
using namespace std;
int getbit(int n, int index)
{
    int num=1<<index;
    return ((n&num)!=0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,position;
    cin>>n>>position;
    cout<<getbit(n,position)<<endl;
    }
}
