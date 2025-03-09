class Solution {
    public int search(int[] nums, int target) {
        return modifiedBinarySearch(nums, target, 0, nums.length - 1);
    }

    private int modifiedBinarySearch(int[] arr, int target, int left, int right) {
        if (left > right) return -1;

        int mid = left + ((right - left) / 2);

        if (arr[mid] == target) return mid;

        if (arr[mid] >= arr[left]) {
            if (arr[left] <= target && target < arr[mid]) {
                return modifiedBinarySearch(arr, target, left, mid - 1);
            } else {
                return modifiedBinarySearch(arr, target, mid + 1, right);
            }
        } else {
            if (arr[mid] < target && target <= arr[right]) {
                return modifiedBinarySearch(arr, target, mid + 1, right);
            } else {
                return modifiedBinarySearch(arr, target, left, mid - 1);
            }
        }
    }
}