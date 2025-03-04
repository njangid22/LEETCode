class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int cur_sum = nums[0];
        int max_sum = nums[0];
        for (int i = 1; i < n; i++) {
            cur_sum = Math.max(nums[i], cur_sum + nums[i]);
            max_sum = Math.max(max_sum, cur_sum);
        }
        return max_sum;
    }
}