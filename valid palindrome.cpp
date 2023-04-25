class Solution {
public:
    bool isPalindrome(string s) {
     int n=s.size();
     int i=0,j=n-1;
     if(n==0)return true;
     else
     {
     while(i<j)
     {
         ///alphanumeric
         if(!isalnum(s[i]))i++;
         else if(!isalnum(s[j]))j--;

         ///uppercase-lowercase
         else{
             if(tolower(s[i])!=tolower(s[j]))
             return false;
             else {
                 i++;
                 j--;
             }
         }
     }
     return true;
     }
    }
};
