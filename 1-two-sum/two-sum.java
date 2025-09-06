class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> h =  new HashMap<>();
        int[] ans = new int[2];
        for(int i=0;i<nums.length;i++){
            if(h.containsKey(nums[i])){
                ans[0]=h.get(nums[i]);
                ans[1]=i;
                return ans;
            }else{
                h.put(target-nums[i],i);
            }
        }
        return new int[] {};
    }
}