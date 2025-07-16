class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& s) {
        vector<int> ans;
        int m = s.size();
        int n = s[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        while(srow<=erow&&scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                ans.push_back(s[srow][i]);
            }
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(s[i][ecol]);
            }
            if(srow != erow) {
                for(int i=ecol-1;i>=scol;i--){
                    ans.push_back(s[erow][i]);
                }
            }
            if(scol != ecol) {
                for(int i=erow-1;i>srow;i--){
                    ans.push_back(s[i][scol]);
                }
            }
            srow++,scol++,erow--,ecol--;
        }
        return ans;
    }
};