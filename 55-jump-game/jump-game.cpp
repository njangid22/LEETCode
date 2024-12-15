class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0; // The farthest we can reach
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) {
                return false; // If current index is beyond our maxReach, we can't proceed
            }
            maxReach = max(maxReach, i + nums[i]); // Update the farthest we can reach
            if (maxReach >= nums.size() - 1) {
                return true; // If we can reach or exceed the last index, return true
            }
        }
        return false; // In case we exit the loop without confirming we can reach the end
    }
};
