class Solution {
public:
    string reverseWords(string s) {
        string word = "";     // Store current word
        string result = "";   // Store final result
        
        // Traverse string from right to left
        for(int i = s.length() - 1; i >= 0; i--) {
            // If current character is not space, add to current word
            if(s[i] != ' ') {
                word = s[i] + word;  // Add character to front of word
            }
            // If space is found and we have a word
            else if(!word.empty()) {
                // Add word to result (with space if result not empty)
                result += (result.empty() ? "" : " ") + word;
                word = "";  // Reset word
            }
        }
        
        // Add last word if exists
        if(!word.empty()) {
            result += (result.empty() ? "" : " ") + word;
        }
        
        return result;
    }
};