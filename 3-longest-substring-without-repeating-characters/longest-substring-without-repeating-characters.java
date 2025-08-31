class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> h=new HashSet<>();
        int left=0;
        int max=0;
        for(int right=0;right<s.length();right++){
            while(h.contains(s.charAt(right))){
                h.remove(s.charAt(left));
                left++;
            }
            h.add(s.charAt(right));
            max=Math.max(max,right-left+1);
        } 
        return max;
    }
}