class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length()) return false;

        int[] as1 = new int[26];
        int[] as2 = new int[26];
        for(int i=0;i<s1.length();i++){
            as1[s1.charAt(i)-'a']++;
            as2[s2.charAt(i)-'a']++;
        }
        int left=0;
        for(int right=s1.length();right<s2.length();right++){
            if(Arrays.equals(as1,as2)){
                return true;
            }
            as2[s2.charAt(right) - 'a']++;
            as2[s2.charAt(left) - 'a']--;
            left++;
        }
        return Arrays.equals(as1, as2);
    }
}