class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN, s = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            s+=nums[i];
            maxi = max(s, maxi);
            if(s<0){
                s = 0;
            }
            
        }
        return maxi;
    }
};