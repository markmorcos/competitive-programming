class Solution {
public:
    int rob(vector<int>& nums) {
        int first = 0, second = 0;
        for (auto num : nums) {
            int third = max(second, num + first);
            first = second;
            second = third;
        }
        return second;
    }
};
