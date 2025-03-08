import java.util.Stack;

class Solution {
    public int[][] merge(int[][] intervals) {
        if (intervals.length == 0) {
            return new int[0][2];
        }

        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        Stack<int[]> stack = new Stack<>();
        stack.push(intervals[0]);
        for (int i = 1; i < intervals.length; i++) {
            int[] top = stack.peek();
            if (intervals[i][0] <= top[1]) {
                stack.pop();
                stack.push(new int[] { top[0], Math.max(top[1], intervals[i][1]) });
            } else {
                stack.push(intervals[i]);
            }
        }
        int[][] result = new int[stack.size()][2];
        int k = stack.size() - 1;
        while (!stack.isEmpty()) {
            result[k] = stack.pop();
            k--;
        }
        return result;
    }
}