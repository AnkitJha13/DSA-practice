class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;

        for (int i = 0; i <= 30; i++)  // i = 30 because of 2^31 - 1
        {
            if (ans == n)
            {
                return true;
            }
            if (ans < INT_MAX / 2)  // to avoid integer overflow
            {
                ans = ans * 2;
            }
        }
        return false;
    }
};

// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1

// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16

// Example 3:
// Input: n = 3
// Output: false
