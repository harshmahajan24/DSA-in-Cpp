/*I scan the array while maintaining the best sum of a subarray that must end at the current position. 
For each value, I either extend the previous subarray or start a new one at this value, whichever gives a larger sum.
I also track the largest ending sum seen anywhere, which is the answer. 
This takes linear time and constant extra space.*/

// leetcode oriented code:
class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
