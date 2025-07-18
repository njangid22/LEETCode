class Solution {
public:
    int coinChange(vector<int>& nums, int target) {
        vector<int> dp(target + 1, 1e9);
        dp[0] = 0;
        
        for(int i=0;i<nums.size();i++) {
            for(int T = nums[i]; T <= target; T++) {
                dp[T] = min(dp[T], 1 + dp[T - nums[i]]);
            }
        }
        
        int ans = dp[target];
        if(ans >= 1e9) return -1;
        return ans;
    }
};