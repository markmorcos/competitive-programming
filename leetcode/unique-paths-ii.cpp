class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r = obstacleGrid.size(), c = obstacleGrid[0].size();
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i && j) obstacleGrid[i][j] = obstacleGrid[i][j] == 1 ? 0 : obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
                else if (i) obstacleGrid[i][j] = !obstacleGrid[i][j] & obstacleGrid[i - 1][j];
                else if (j) obstacleGrid[i][j] = !obstacleGrid[i][j] & obstacleGrid[i][j - 1];
                else obstacleGrid[0][0] = !obstacleGrid[0][0];
            }
        }
        return obstacleGrid[r - 1][c - 1];
    }
};
