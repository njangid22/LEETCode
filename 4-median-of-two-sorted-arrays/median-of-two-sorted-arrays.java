class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        int[] anew = new int[n + m];

        int i = 0, j = 0, k = 0;

        // Merge two sorted arrays into one
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                anew[k++] = nums1[i++];
            } else {
                anew[k++] = nums2[j++];
            }
        }

        // Copy remaining elements from nums1, if any
        while (i < n) {
            anew[k++] = nums1[i++];
        }

        // Copy remaining elements from nums2, if any
        while (j < m) {
            anew[k++] = nums2[j++];
        }

        int size = anew.length;

        // Calculate the median
        if (size % 2 == 0) {
            return (anew[size / 2 - 1] + anew[size / 2]) / 2.0;
        } else {
            return anew[size / 2];
        }
    }
}