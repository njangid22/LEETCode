class Solution {
public:
    int numberOfSubstrings(string s) {
        int size = s.size();
        int last_a = -1, last_b = -1, last_c = -1;
        int ans = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'a') last_a = i;
            else if (s[i] == 'b') last_b = i;
            else if (s[i] == 'c') last_c = i;
            
            if (last_a >= 0 && last_b >= 0 && last_c >= 0) {
                int mini = min(last_a, min(last_b, last_c));
                ans += mini + 1;
            }
        }
        return ans;
    }
};