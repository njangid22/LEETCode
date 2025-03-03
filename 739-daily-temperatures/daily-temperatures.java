import java.util.Stack;

class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        Stack<Integer> stack = new Stack<>();
        int[] result = new int[n]; // Initialize result array
        for (int i = n - 1; i >= 0; i--) { // Loop through all elements
            while (!stack.isEmpty() && temperatures[stack.peek()] <= temperatures[i]) {
                stack.pop(); // Remove elements from stack that are smaller
            }
            if (stack.isEmpty()) {
                result[i] = 0;
            } else {
                result[i] = stack.peek() - i;
            }
            stack.push(i); // Add current index to stack
        }
        return result; // Return result array
    }
}