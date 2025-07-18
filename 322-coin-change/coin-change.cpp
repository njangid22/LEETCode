class Solution {
public:
    int coinChange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, 1e9));
        
        for(int T = 0; T <= target; T++) {
            if(T % nums[0] == 0) dp[0][T] = T / nums[0];
            else dp[0][T] = 1e9; // handle cases where T is not divisible by nums[0]
        }
        
        for(int ind = 1; ind < n; ind++) {
            for(int T = 0; T <= target; T++) {
                int notTake = dp[ind-1][T];
                int take = 1e9;
                if(nums[ind] <= T) {
                    take = 1 + dp[ind][T - nums[ind]];
                }
                dp[ind][T] = min(take, notTake);
            }
        }
        
        int ans = dp[n-1][target];
        if(ans >= 1e9) return -1;
        return ans;
    }
};