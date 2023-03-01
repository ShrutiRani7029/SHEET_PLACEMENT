class Solution {
public:
    int getSum(int a, int b) {
         int sum=a^b;
         int carry= unsigned (a&b)<<1;
         if(b==0)return a;
         return getSum(sum,carry);
        
    }
};
