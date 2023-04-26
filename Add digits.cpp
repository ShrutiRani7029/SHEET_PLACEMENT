class Solution {
public:
    int addDigits(int num) {
     
   
       // if(num.size()==1)return;
        while(num>9)
        {
            int sum=0;
            while(num>0)
            {
            sum+=num%10;///sum=8///sum=3+8=11//sum=1,sum=2
            num/=10;///num=3///num=0//num=1//num=0
            }
            num=sum;///num=11///num=2
        }
        return num;///2
    }
};
