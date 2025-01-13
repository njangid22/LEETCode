class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ss = s.size();
        int tt = t.size();
        int j = 0; // Index for string t

        for (int i = 0; i < ss; i++) {
            // Find the current character in s within the remaining characters in t
            while (j < tt && s[i] != t[j]) {
                j++;
            }

            // If the character is not found, return false
            if (j == tt) {
                return false;
            }

            // Move to the next character in t
            j++;
        }

        // If all characters in s are found in t, return true
        return true;
    }
};