class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vp;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    vp.push_back({i,j});
                }
            }
        }
        for(auto &x:vp)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][x.second]=0;
                for(int j=0;j<matrix[i].size();j++)
                {
                    matrix[x.first][j]=0;
                }
            }
            
        }
    }
};