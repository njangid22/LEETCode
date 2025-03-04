import java.util.HashSet;

public class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        HashSet<Integer> set = new HashSet<>();
        int[] arr = new int[n * n];
        int k = 0;
        int[] result = new int[2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                set.add(grid[i][j]);
                arr[k] = grid[i][j];
                k++;
            }
        }
        Arrays.sort(arr);
        for (int i = 0; i < (n * n) - 1; i++) {
            if (arr[i] == arr[i+1]) {
                result[0] = arr[i];
                break;
            }
        }
        for (int i = 1; i <= n * n; i++) {
            if (!set.contains(i)) {
                result[1] = i;
                break;
            }
        }
        return result;
    }
}