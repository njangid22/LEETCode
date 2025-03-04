class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer> hash= new HashMap<>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            hash.put(nums[i],hash.getOrDefault(nums[i], 0) + 1);
        }
        for(int i=0;i<n;i++){
            if(hash.get((nums[i]))==1){
                return nums[i];
            }
        }
        return 0;
    }
}