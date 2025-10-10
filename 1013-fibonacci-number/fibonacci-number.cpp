class Solution {
public:
    static constexpr int mx = 31;
    int found[mx]={0};
    int dp[mx];
    int rec(int n){
        if(found[n]==1)return dp[n];
        if(n<=1)return n;
        found[n]=1;
        return dp[n]=rec(n-1)+rec(n-2);
    }
    int fib(int n) {
        return rec(n);
    }
};