class Solution {
public:
    double myPow(double x, int n) {
       double res = 1.0;
        long long b = n; // Convert 'n' to long long to handle INT_MIN correctly

        if (b < 0) {
            x = 1 / x; // Calculate the reciprocal for negative exponent
            b = -b;    // Make 'b' positive
        }

        while (b > 0) {
            if (b % 2 == 1)
                res *= x;
            x = x * x;
            b = b / 2;
        }

        return res;
    }
};
