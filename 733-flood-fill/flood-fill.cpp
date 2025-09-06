class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        const auto org = image[sr][sc];
        if (color == org) {
            return image;
        }

        const auto directions = { pair{-1,0}, {1,0}, {0,1}, {0,-1} };
        const auto m = image.size();
        const auto n = image[0].size();

        auto q = deque{ pair{ sr, sc }};

        while (!q.empty()) {

            const auto &[i, j] = q.front();
            q.pop_front();

            image[i][j] = color;

            for (const auto &[dx, dy]: directions) {
                const auto x = i + dx;
                const auto y = j + dy;

                if (
                    0 <= x and x < m and 0 <= y and y < n  // in bounds
                    and image[x][y] == org // allowed to change
                ) {
                    image[x][y] = color;
                    q.push_back({x, y});
                }
            }
        }

        return image;
    }
};