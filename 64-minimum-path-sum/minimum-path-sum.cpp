class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row, vector<int>(col, 0));

        // Initialize the first cell
        dp[0][0] = grid[0][0];

        // Fill the first row
        for (int i = 1; i < col; i++) {
            dp[0][i] = dp[0][i-1] + grid[0][i];
        }

        // Fill the first column
        for (int i = 1; i < row; i++) {
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }

        // Fill the remaining cells
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }

        // Return the minimum path sum
        return dp[row-1][col-1];
    }
};