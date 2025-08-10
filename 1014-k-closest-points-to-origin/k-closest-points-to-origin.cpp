class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> hash;
        for(int i=0;i<points.size();i++){
            int dis = points[i][0]*points[i][0]+points[i][1]*points[i][1];
            hash.push({dis,points[i]});

            if(hash.size()>k){
                hash.pop();
            }
        }
        vector<vector<int>> ans;
        while(!hash.empty()){
            ans.push_back(hash.top().second);
            hash.pop();
        }
        return ans;
    }
};