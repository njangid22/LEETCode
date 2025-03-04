class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int count=1;
        int max=0;
        int val=nums[0];
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(max<count){
                max=count;
                val=nums[i];
            }
        }
        return val;
    }
}