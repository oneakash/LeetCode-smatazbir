class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        auto dfs = [&](auto&& self, int i, int j, int index)-> bool{
            if(index==word.length())
                return true;
            if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[index])
                return false;
            char curr = board[i][j];
            board[i][j]='#';
            bool found = self(self, i, j+1, index+1) || self(self, i, j-1, index+1)
                    || self(self, i+1, j, index+1) || self(self, i-1, j, index+1);
            board[i][j] = curr;
            return found;
        };
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(dfs(dfs, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};