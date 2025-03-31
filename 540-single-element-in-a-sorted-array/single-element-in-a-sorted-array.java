class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        int l = 0;
        while(l<=(n-1)){
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