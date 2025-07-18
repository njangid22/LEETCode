class Solution {
public:
    int coinChange(vector<int>& nums, int target) {
        vector<int> dp(target + 1, 1e9);
        dp[0] = 0;
        
        for(int num : nums) {
            for(int T = num; T <= target; T++) {
                dp[T] = min(dp[T], 1 + dp[T - num]);
            }
        }
        
        int ans = dp[target];
        if(ans >= 1e9) return -1;
        return ans;
    }
};