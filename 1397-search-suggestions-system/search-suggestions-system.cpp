class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        int left=0, right=products.size()-1;
        vector<vector<string>> ans;
        for(int i=0;i<searchWord.size();i++){
            char c = searchWord[i];
            while(left <= right && (products[left][i]<c || products[left].size()<=i)){
                left++;
            }
            while(left <= right && (products[right][i]>c || products[right].size()<=i )){
                right--;
            }
            vector<string> res;
            for(int j=0;j<3&&left+j<=right;j++){
                res.push_back(products[left+j]);
            }
            ans.push_back(res);
        }
        return ans;
    }
};