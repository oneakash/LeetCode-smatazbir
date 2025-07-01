class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // vector<int> a(n);
        int mn = INT_MAX;
        // for(int i=0;i<n;i++) {
        //     mn = min(mn,prices[i]);
        //     a[i]=mn;
        // }
        int ans = 0;
        for(int i=1;i<prices.size();i++){
            mn = min(mn, prices[i-1]);
            ans = max(ans,prices[i]-mn);
        }
        // if(n==1)
        //     return 0;
        // int mini = INT_MAX, maxi = INT_MIN;
        // for(int i = 0, j = 1; i < n; i++)
        // {
        //     if()
        //     maxi = max(maxi, prices[i]);
        //     mini = min(mini, prices[i]);
        // }
        // return maxi - mini;
        return max(0,ans);
    }
};