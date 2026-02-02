class Solution {
private:
    int solve(int n, unordered_map<int, int>& memo){
        if(n==0 || n==1)return 1;
        if(memo.find(n)==memo.end())
            memo[n]=solve(n-1, memo)+solve(n-2, memo);
        return memo[n];
    }
public:
    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return solve(n, memo);
    }
};