class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        PriorityQueue<Integer> Q = new PriorityQueue<>();
        for(int i=0;i<m;i++){
            Q.add(nums1[i]);
        }
        for(int i=0;i<n;i++){
            Q.add(nums2[i]);
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=Q.peek();
            Q.poll();
        }
        System.out.println(Q);
    }
    
}