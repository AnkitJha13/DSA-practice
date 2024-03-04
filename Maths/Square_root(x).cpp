class Solution {
public:
    int mySqrt(int x) {

        if(x == 0) return 0;
        int low = 1;
        int high = x;
        int ans = 1;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if((mid * mid) <= x){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }

        }
        return ans;
    }
};





// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
