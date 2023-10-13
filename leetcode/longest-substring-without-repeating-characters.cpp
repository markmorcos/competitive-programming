class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int occurrences[256];
        memset(occurrences, 0, sizeof occurrences);
        int n = s.size(), start = 0, maxi = 0;
        for (int i = 0; i < n; ++i) {
            while (occurrences[s[i]]) --occurrences[s[start]], ++start;
            ++occurrences[s[i]];
            maxi = max(maxi, i - start + 1);
        }
        return maxi;
    }
};
