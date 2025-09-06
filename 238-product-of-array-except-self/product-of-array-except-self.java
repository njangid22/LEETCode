class Solution {
    public int[] productExceptSelf(int[] nums) {
        int mul=1;
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                mul=mul*nums[i];
            }else{
                count++;
            }
        }
        int[] ans = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            if(count>1){
                ans[i]=0;
            }else if(count==1){
                if(nums[i]!=0){
                    ans[i]=0;
                }else{
                    ans[i]=mul;
                }
            }else{
                ans[i]=mul/nums[i];
            }
        }
        return ans;
    }
}