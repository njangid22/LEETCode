class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        int sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0) {
                    // For the first row or column, just copy the matrix values
                    ans[i][j] = matrix[i][j];
                } else if (matrix[i][j] == 1) {
                    // Find the minimum of three neighbors and add 1
                    ans[i][j] = min({ans[i-1][j], ans[i][j-1], ans[i-1][j-1]}) + 1;
                } else {
                    ans[i][j] = 0;  // No square possible if matrix[i][j] == 0
                }

                // Accumulate the sum
                sum += ans[i][j];
            }
        }

        return sum;
    }
};
