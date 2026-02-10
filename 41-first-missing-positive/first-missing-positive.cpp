class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // Step 1: Replace all numbers <= 0 or > n with n+1
        for (int i = 0; i < n; ++i) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;
            }
        }

        // Step 2: Use index as a marker
        for (int i = 0; i < n; ++i) {
            int val = abs(nums[i]);
            if (val >= 1 && val <= n) {
                nums[val - 1] = -abs(nums[val - 1]); // Mark as negative
            }
        }

        // Step 3: First index with positive value is the missing number
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }

        return n + 1;
    }
};
