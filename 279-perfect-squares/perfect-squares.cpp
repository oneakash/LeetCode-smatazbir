class Solution {
public:
    int numSquares(int n) {
        if(n<=0)return 0;
        vector<int>cntps(n+1, INT_MAX);
        cntps[0]=0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j*j <= i; j++){
                cntps[i] = min(cntps[i], cntps[i-j*j]+1);
            }
        }
        return cntps.back();
    }
};