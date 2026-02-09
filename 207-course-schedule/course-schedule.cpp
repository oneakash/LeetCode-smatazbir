class Solution {
private:
    bool dfs(int node, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &pathVis){
        vis[node] = true;
        pathVis[node] = true;
        for(int it: adj[node]){
            if(!vis[it]){
                if(dfs(it, adj, vis, pathVis))
                    return true;
            }
            else if(pathVis[it])
                return true;
        }
        pathVis[node] = false;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto pre: prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        vector<bool> vis(numCourses, false);
        vector<bool> pathVis(numCourses, false);
        for(int i= 0; i<numCourses; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, pathVis))
                    return false;
            }
        }
        return true;
    }
};