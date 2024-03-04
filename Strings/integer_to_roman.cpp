class Solution
{
public:
    string intToRoman(int num)
    {
        string ans = "";
        string romanSymbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for (int i = 0; i < 13; i++)
        {
            while (num >= values[i])
            {
                ans += romanSymbol[i];
                num -= values[i];
            }
        }
        return ans;
    }
};






Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.
Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
