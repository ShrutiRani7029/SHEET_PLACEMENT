#include<bits/stdc++.h>
using namespace std;
///f(n-1) + f(n-2)
///0, 1, 1, 2, 3,5,8,13,...
int fibo(int n)
{
    if(n<=1)return n;
    return fibo(n-1) + fibo(n-2);
}
int fact(int n);
///5!=120
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    cout<<endl;
    cout<<fact(n);
}
///factorial
///0!=1,1!=1
int fact(int n)
{
    if(n<=1)return 1;
    return n*fact(n-1);
}
