class Solution {
public:
    set<vector<int>> s;
    void com(vector<int>& candidates, int target, int i, vector<int>& comb, vector<vector<int>>& ans){
            if(candidates.size()==i||target<0){
                return;
            }
            if(target==0){
                if(s.find(comb)==s.end()){
                    ans.push_back(comb);
                    s.insert(comb);
                    return;
                }
            }
            comb.push_back(candidates[i]);
            com(candidates, target-candidates[i], i+1, comb, ans);
            com(candidates, target-candidates[i], i, comb, ans);
            comb.pop_back();
            com(candidates, target, i+1, comb, ans);
            
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        com(candidates, target, 0, comb, ans);
        return ans;
    }
};