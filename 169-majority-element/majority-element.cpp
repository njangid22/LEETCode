class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int can = 0; // Declare 'can' outside of the loop
        
        for (int i = 0; i < size; i++) {
            if (count == 0) {
                can = nums[i]; // Update the candidate
            }
            if (can == nums[i]) { // Compare with current element
                count++;
            } else {
                count--;
            }
        }
        return can; // Return the majority element candidate
    }
};
