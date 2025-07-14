class Solution {
public:
    set<vector<int>> s;
    void com(vector<int>& arr, int i ,vector<int>& comb, int target,vector<vector<int>>& ans){
                if(arr.size()==i||target<0){
                    return ;
                }
                if(target==0){
                    if(s.find(comb)==s.end()){
                     ans.push_back(comb);
                     s.insert(comb);
                    }
                    return;
                }
                comb.push_back(arr[i]);
                com(arr, i+1, comb, target-arr[i], ans);
                com(arr, i, comb, target-arr[i], ans);
                comb.pop_back();
                com(arr, i+1, comb, target, ans);
                
            }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        com(arr, 0, comb, target, ans);
        return ans;
    }
};