class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), start = 0, total = 0, mini = INT_MAX;
        for (int i = 0; i < n; ++i) {
            total += nums[i];
            while (total >= target) mini = min(mini, i - start + 1), total -= nums[start++];
        }
        return mini == INT_MAX ? 0 : mini;
    }
};

