class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
            ans.push_back(std::vector<int>(i+1, 0));
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    ans[i][j]=1;
                }
                else
                {
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans;
    }
};