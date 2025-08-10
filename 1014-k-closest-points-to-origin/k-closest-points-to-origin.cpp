class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxHeap;

        for (int i = 0; i < points.size(); i++) {
            int dis = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            maxHeap.push({dis, points[i]});
            
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        vector<vector<int>> ans;
        while (!maxHeap.empty()) {
            ans.push_back(maxHeap.top().second);  
            maxHeap.pop();
        }
        
        return ans;
    }
};
