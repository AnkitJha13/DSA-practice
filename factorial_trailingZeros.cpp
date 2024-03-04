class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        while(n >= 5){
            int quotient = n/5;   // divide by 5 for checking 5 factorials for 0 checking
            n = n/5;              // updating nn here 
            ans += quotient;
        }
        return ans;
    }
};




// Example 1:

// Input: n = 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.

// Example 2:

// Input: n = 5
// Output: 1
// Explanation: 5! = 120, one trailing zero.

// Example 3:

// Input: n = 0
// Output: 0
 
