class Solution {
    public int minimumOperations(int[] nums) {
        PriorityQueue<Integer> q = new PriorityQueue<>();
        for (int num : nums) {
            if (num > 0) {
                q.add(num);
            }
        }
        int operations = 0;
        while (!q.isEmpty()) {
            int min = q.poll();
            operations++;
            PriorityQueue<Integer> temp = new PriorityQueue<>();
            while (!q.isEmpty()) {
                int num = q.poll();
                if (num - min > 0) {
                    temp.add(num - min);
                }
            }
            q = temp;
        }
        return operations;
    }
}