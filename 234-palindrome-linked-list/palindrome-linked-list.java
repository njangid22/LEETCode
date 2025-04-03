class Solution {
    public boolean isPalindrome(ListNode head) {
        Stack<Integer> st = new Stack<>();
        ListNode curr = head;
        while (curr != null) {
            st.push(curr.val); // Push the value, not the node
            curr = curr.next;
        }
        while (head != null) {
            if (st.pop() == head.val) { 
                head = head.next;
            } else {
                return false;
            }
        }
        return true;
    }
}