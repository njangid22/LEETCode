#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<std::string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans = {folder[0]};

        for (int i = 1; i < folder.size(); ++i) {
            if (folder[i].substr(0, ans.back().size() + 1) != ans.back() + "/") {
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};