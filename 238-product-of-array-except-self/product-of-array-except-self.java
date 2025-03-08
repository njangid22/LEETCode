class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int count=0;
        int mul=1;
        int[] answer =new int[n];
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                mul*=nums[i];
            }else{
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(count==0){
            answer[i]=mul/nums[i];
            }else if(count==1){
                if(nums[i]==0){
                    answer[i]=mul;
                }else{
                    answer[i]=0;
                }
            }else{
                answer[i]=0;
            }
        }
        return answer;
    }
}