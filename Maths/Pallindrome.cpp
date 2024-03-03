class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromic
        }
        int originalNum = x;
        int ans = 0;
        while(x!=0){
            int digit = x%10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){   // overflow check 
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x/10;
        }

        if(ans == originalNum){
            return true;
        }
        else{
            return false;
        }
    }
};


// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
