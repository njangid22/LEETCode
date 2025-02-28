class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
       int n = nums1.length;
       int m = nums2.length;
       for (int i = 0; i < n; i++) {
           int j = 0;
           while (j < m && nums2[j] != nums1[i]) {
               j++;
           }
           // Start scanning from the next index after j
           int k = j + 1;
           while (k < m && nums2[k] <= nums1[i]) {
               k++;
           }
           if (k < m) {
               nums1[i] = nums2[k];
           } else {
               nums1[i] = -1;
           }
       }
       return nums1;
    }
}
