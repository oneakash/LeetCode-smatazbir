class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);
        for(auto &ans:prerequisites){
            graph[ans[1]].push_back(ans[0]);
            indegree[ans[0]]++;
        }
        queue<int> que;
        for(int i = 0; i<numCourses;  i++){
            if(!indegree[i])
                que.push(i);
        }
        vector<int> res;
        int visited = 0;
        while(!que.empty()){
            int u = que.front();
            res.push_back(u);
            visited++;
            que.pop();
            for(int &v:graph[u]){
                indegree[v]--;
                if(!indegree[v])
                    que.push(v);
            }
        }
        if(visited == numCourses)
            return res;
        return {};
    }
};