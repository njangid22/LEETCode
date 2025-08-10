class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> let;
        vector<string> dig;
        for(int i=0;i<logs.size();i++){
            if(isdigit(logs[i][logs[i].size()-1])){
                dig.push_back(logs[i]);
            }else{
                let.push_back(logs[i]);
            }
        }
        sort(let.begin(), let.end(), [](const string& a, const string& b) {
            int spacePosA = a.find(' ');
            int spacePosB = b.find(' ');
            // Compare the content part of the logs
            string contentA = a.substr(spacePosA);
            string contentB = b.substr(spacePosB);
            if (contentA != contentB) {
                return contentA < contentB;  // Lexicographical comparison by content
            }
            // If the contents are equal, compare by identifier (lexicographically)
            return a < b;  // Lexicographical comparison by identifier
        });
        vector<string> ans;
        for(int i=0;i<let.size();i++){
            ans.push_back(let[i]);
        }
        for(int i=0;i<dig.size();i++){
            ans.push_back(dig[i]);
        }
        return ans;
    }
};