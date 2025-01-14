class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int left = 0;
        int maxArea = 0;
        int right = size - 1;
        
        while (left < right) {
            int dis = right - left;
            int area = min(height[left], height[right]) * dis;
            maxArea = max(maxArea, area);
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
};