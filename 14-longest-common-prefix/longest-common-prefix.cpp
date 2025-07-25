class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),m=INT_MAX;
        for(int i=0;i<n-1;i++){
            int mh=0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]!=strs[i+1][j])break;mh++;
            }
            m=min(m,mh);
        }
        return strs[0].substr(0,m);
    }
};