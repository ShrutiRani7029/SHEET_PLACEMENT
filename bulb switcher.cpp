class Solution {
public:
    int bulbSwitch(int n) {
       int count=0;
       for(int i=1;i<=n;i++){
           int squareroot=sqrt(i);
           if(squareroot*squareroot==i)///perfect square
           count++;
       }
       return count;
    }
};
