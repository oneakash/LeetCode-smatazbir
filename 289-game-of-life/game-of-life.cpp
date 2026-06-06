class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n=board[0].size();
        vector<vector<int>> te(m, vector<int>(n));
        
        for(int i = 0; i<m; i++){
            for(int j= 0; j<n; j++){
                int c = 0;
                if(i-1>=0 && j-1>=0 && board[i-1][j-1]){
                    c++;
                }
                if(i-1>=0 && board[i-1][j]){
                    c++;
                }
                if(i-1>=0 && j+1<n && board[i-1][j+1]){
                    c++;
                }
                if(j-1>=0 && board[i][j-1]){
                    c++;
                }
                if(j+1<n && board[i][j+1]){
                    c++;
                }
                if(i+1<m && j-1>=0 && board[i+1][j-1]){
                    c++;
                }
                if(i+1<m && board[i+1][j]){
                    c++;
                }
                if(i+1<m && j+1<n && board[i+1][j+1]){
                    c++;
                }
                if(board[i][j]){
                    if(c<2){
                        te[i][j]=0;
                    }
                    if(c>3){
                        te[i][j]=0;
                    }
                    if(c==2 || c==3){
                        te[i][j]=1;
                    }
                }else{
                    if(c==3)
                        te[i][j]=1;
                    else te[i][j]=0;
                }
            }
        }
        for(int i = 0; i<m; i++){
            for(int j= 0; j<n; j++){
                board[i][j]=te[i][j];
            }
        }
    }
};