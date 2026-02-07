class Solution {
private:
    double dfs(int curr, int target, vector<vector<int>>& graph, 
               vector<bool>& visited, unordered_map<string, double>& wt) {
        
        if (curr == target) return 1.0;
        
        visited[curr] = true;
        
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                string key = to_string(curr) + "," + to_string(neighbor);
                double product = wt[key] * dfs(neighbor, target, graph, visited, wt);
                if (product > 0) return product;
            }
        }
        
        visited[curr] = false;
        return -1.0;
    }
    
public:
    vector<double> calcEquation(vector<vector<string>>& equations, 
                                vector<double>& values, 
                                vector<vector<string>>& queries) {
        
        unordered_map<string, int> var_idx;
        int idx = 0;
        
        // Map variables to indices
        for (auto& eq : equations) {
            if (!var_idx.count(eq[0])) var_idx[eq[0]] = idx++;
            if (!var_idx.count(eq[1])) var_idx[eq[1]] = idx++;
        }
        
        int n = var_idx.size();
        vector<vector<int>> graph(n);
        unordered_map<string, double> wt;
        
        // Build graph
        for (int i = 0; i < equations.size(); i++) {
            int u = var_idx[equations[i][0]];
            int v = var_idx[equations[i][1]];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            wt[to_string(u) + "," + to_string(v)] = values[i];
            wt[to_string(v) + "," + to_string(u)] = 1.0 / values[i];
        }
        
        vector<double> ans;
        
        // Process queries
        for (auto& q : queries) {
            if (!var_idx.count(q[0]) || !var_idx.count(q[1])) {
                ans.push_back(-1.0);
                continue;
            }
            
            int start = var_idx[q[0]];
            int end = var_idx[q[1]];
            
            if (start == end) {
                ans.push_back(1.0);
                continue;
            }
            
            vector<bool> visited(n, false);
            double result = dfs(start, end, graph, visited, wt);
            ans.push_back(result);
        }
        
        return ans;
    }
};