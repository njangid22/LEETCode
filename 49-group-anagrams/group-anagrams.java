class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> h = new HashMap<>();
        for(int i=0;i<strs.length;i++){
            char[] ch = strs[i].toCharArray();
            Arrays.sort(ch);
            String sortedstr =new String(ch);
            if(!h.containsKey(sortedstr)){
                h.put(sortedstr, new ArrayList<>());
            }
            h.get(sortedstr).add(strs[i]);
        }
        return new ArrayList<>(h.values());
    }
}