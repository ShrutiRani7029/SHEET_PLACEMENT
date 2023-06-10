class Solution {
public:
bool isAlphaVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
string reverseVowels(string s)
{
    int n = s.size();
    int i = 0, j = n - 1;
    char temp;
    while (i < j)
    {
        if (isAlphaVowel(s[i]) && isAlphaVowel(s[j]))
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        else if (!isAlphaVowel(s[i]))
        {
            i++;
        }
        else if (!isAlphaVowel(s[j]))
        {
            j--;
        }
    }
    return s;
}
};
