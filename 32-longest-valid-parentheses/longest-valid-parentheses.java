import java.util.Stack;

class Solution {
    public int longestValidParentheses(String s) {
        int max = 0;
        Stack<Integer> stack = new Stack<>();
        stack.push(-1); // Initialize stack with -1 to handle edge cases

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push(i);
            } else {
                stack.pop();
                if (stack.isEmpty()) {
                    stack.push(i); // Update the starting point if stack is empty
                } else {
                    max = Math.max(max, i - stack.peek());
                }
            }
        }
        return max;
    }
}