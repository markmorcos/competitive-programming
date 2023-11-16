class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size(), dp[n + 1][m + 1];
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                if (i && j) {
                    if (word1[i - 1] == word2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                    else dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
                }
                else if (i) dp[i][j] = i;
                else if (j) dp[i][j] = j;
                else dp[i][j] = 0;
            }
        }
        return dp[n][m];
    }
};
