class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int maxSum = nums[0];
        int currMax = nums[0];

        int i;
        for(i = 1; i < nums.size(); i++){
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(currMax, maxSum);
        }

        return maxSum;
    }
};