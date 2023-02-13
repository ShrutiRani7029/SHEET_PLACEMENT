/*vector<int> numsSameConsecDiff(int n, int k) {
        if(n==1 && k==0)return 1;
        int num=1;
        for(int i=1;i<=n;i++)
        {
         num=num*10;//10//100//1000
        }
        int nums=num/10;//100
        for(int i=nums;i<num;i++)
        {
           for(int j=0;j<3;j++)
           {

           }
        }*/
class Solution {
public:
    vector<int>ans;
    int countDigit(int n)
    {
        int count = 0;
        while(n>0)
        {
            count++;
            n=n/10;
        }
    return count;
    }
    
    void findNumber(int num, int n, int k)
    {
        if(countDigit(num)==n)
        {
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int ld=num%10;
            if(abs(ld-i)== k)
            {
             int number = num*10+i;
                findNumber(number,n,k);
            }
        }
    }
