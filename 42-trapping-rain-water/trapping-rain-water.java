class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int[] leftmax= new int[n];
        int[] rightmax= new int[n];
        int min=0;
        int sum=0;
        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            leftmax[i] = Math.max(height[i],leftmax[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i] = Math.max(height[i],rightmax[i+1]);
        }
        for(int i=0;i<n;i++){
            min=Math.min(leftmax[i],rightmax[i]);
            sum=sum+(min-height[i]);
        }
        return sum;
    }
}