class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> ans;
        int n = searchWord.size();
        int m = products.size();
        for (int i = 0; i < n; ++i) {
            string prefix = searchWord.substr(0, i + 1);
            vector<string> suggestion;
            int left = 0, right = m - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (products[mid].compare(0, prefix.size(), prefix) < 0) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            for (int j = left; j < min(left + 3, m); ++j) {
                if (products[j].compare(0, prefix.size(), prefix) == 0) {
                    suggestion.push_back(products[j]);
                } else {
                    break;
                }
            }

            ans.push_back(suggestion);
        }

        return ans;
    }
};
