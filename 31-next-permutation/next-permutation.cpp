class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int i = size - 2; // Start from the second last element
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        if (i < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = size - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end()); // Reverse from i + 1 to the end
    }
};