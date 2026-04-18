class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, res = INT_MAX;
        int val = 0;
        while(i<nums.size()){
            val+=nums[i];
            while(val>=target){
                res = min(res, i-j+1);
                val-=nums[j];
                j++;
            }
            i++;
        }
        return res==INT_MAX?0:res;
    }
};