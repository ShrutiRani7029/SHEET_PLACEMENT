class Solution {
public:
    int strStr(string s, string needle) {
      int n1 = s.size(), n2 = needle.size();

     int count = 0, i = 0, a = 0, ans = -1;

    while (a < n1) {
        if (needle[i] == s[a]) {
            i++;
            a++;
            count++;

            if (count == n2) {
                ans = a - n2;
                break;
            }
        } else {
            a = a - count + 1;
            i = 0;
            count = 0;
        }
    }

    return ans;

     
    }
};
