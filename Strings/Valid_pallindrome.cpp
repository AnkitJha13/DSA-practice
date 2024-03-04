class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length()-1;

        while(st<=e){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[e])){
                e--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[e])){
                return false;
            }
            else{
                st++;
                e--;
            }
        }
        return true;
    }
};




Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
