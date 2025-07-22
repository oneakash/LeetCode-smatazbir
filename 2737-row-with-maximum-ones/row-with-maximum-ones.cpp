class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mx=INT_MIN;
        int sz=mat.size();
        int fq[100]={0};
        for(int i=0;i<sz;i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)c++;
            }
            mx=max(mx,c);
            fq[i]=c;
        }
        for(int i=0;i<sz;i++){
            if(fq[i]==mx) return {i,mx};
        }
        return {};
    }
};