class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int ans = 0;
        for(int i=1;i<prices.size();i++){
            mn = min(mn, prices[i-1]);
            ans = max(ans,prices[i]-mn);
        }
        return max(0,ans);
    }
};