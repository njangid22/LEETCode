import java.util.HashSet;

public class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        HashSet<Integer> set = new HashSet<>();
        int[] result = new int[2];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!set.add(grid[i][j])) {
                    result[0] = grid[i][j]; // repeated number
                }
            }
        }
        
        for (int i = 1; i <= n * n; i++) {
            if (!set.contains(i)) {
                result[1] = i; // missing number
                break;
            }
        }
        
        return result;
    }
}