class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        list<char> myList;
        int left = 0;
        int maxlen = 0;
        for (int right = 0; right < s.length(); right++) {
            if (find(myList.begin(), myList.end(), s[right]) == myList.end()) {
                myList.push_back(s[right]);
                maxlen = max(maxlen, (int)myList.size());
            } else {
                myList.remove(s[left]);
                left++;
                right--; // Decrement right to recheck the current character
            }
        }
        return maxlen;
    }
};