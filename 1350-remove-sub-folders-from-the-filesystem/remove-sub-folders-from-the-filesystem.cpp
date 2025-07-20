class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> result;

        // Step 1: Sort the folder list lexicographically
        sort(folder.begin(), folder.end());

        // Step 2: Add first folder to result
        result.push_back(folder[0]);

        // Step 3: Traverse from second folder
        for (int i = 1; i < folder.size(); ++i) {
            string last = result.back();  // get last added folder
            string prefix = last + "/";   // to match exact subfolder pattern

            // Check if current folder starts with last + "/"
            if (folder[i].substr(0, prefix.size()) != prefix) {
                result.push_back(folder[i]);  // not a subfolder
            }
        }

        return result;
    }
};
