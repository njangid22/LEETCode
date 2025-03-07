class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int numrow = matrix.length;
        int numcol = matrix[0].length;
        if (target < matrix[0][0] || target > matrix[numrow - 1][numcol - 1]) {
            return false;
        }
        int left = 0;
        int right = numrow * numcol - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midValue = matrix[mid / numcol][mid % numcol];
            if (midValue == target) {
                return true;
            } else if (midValue < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
}