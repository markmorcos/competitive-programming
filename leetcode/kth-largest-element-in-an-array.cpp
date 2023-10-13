class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int sorted[20001];
        memset(sorted, 0, sizeof sorted);
        int cumulative_k = 0;
        for (auto n : nums) sorted[n + 10000]++;
        for (int i = 20000; i >= 0; --i) {
            cumulative_k += sorted[i];
            if (cumulative_k >= k) return i - 10000;
        }
        return -1;
    }
};
