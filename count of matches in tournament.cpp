class Solution {
public:
    int numberOfMatches(int n) {
        int a,b;
        int ans=0;
        int m1,m2;
        while(n!=1)
        {
            if(n%2!=0)
            {
                a=(n-1)/2;///3
                b=((n-1)/2)+1;///4
                m1=max(a,b);///4
                n=m1;
                m2=min(a,b);///3
                ans+=m2;
            }
            else if(n%2==0)
            {
                a=n/2;
                b=n/2;
                n=a;
                ans+=b;
            }
        }
        return ans;
    }
};
///t.c-o(n)

return n-1 - o(1)
