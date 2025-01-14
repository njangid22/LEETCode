class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                return {left + 1, right + 1}; // Add 1 to the indices because the problem uses 1-based indexing
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return {}; // Return an empty vector if no solution is found
    }
};