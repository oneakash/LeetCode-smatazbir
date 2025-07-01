class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = INT_MAX;
        int ans = 0;
        for(int i=1;i<n;i++){
            mn = min(mn, prices[i-1]);
            ans = max(ans,prices[i]-mn);
        }
        return max(0,ans);
    }
};