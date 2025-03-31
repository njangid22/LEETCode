class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        int l = 0;
        int r= n-1;
    
        while(l<=r){
            if(l==n-1){
                return nums[l];
            }
            if(nums[l]==nums[l+1]){
                l=l+2;
            }else{
                return nums[l];
            }
        }
        return 0;
    }
}