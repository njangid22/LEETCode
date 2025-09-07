class Solution {
    public int characterReplacement(String s, int k) {
         int[] count = new int[26];
         int maxcount = 0;
         int maxlen = 0;
         int left=0;
         for(int right=0;right<s.length();right++){
            count[s.charAt(right)-'A']++;
            maxcount = Math.max(maxcount, count[s.charAt(right)-'A']);
            if((right-left+1) - maxcount > k){
                count[s.charAt(left)-'A']--;
                left++;
            }
            maxlen = Math.max(maxlen, right-left+1);
         }
         return maxlen;
    }
}