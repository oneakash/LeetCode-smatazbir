class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, n = nums.size();
        for(i = 0; i < n; i++)
        {
            int x = target - nums[i];
            for(j = 0; j < n && i != j; j++)
            {
                if(x==nums[j])
                {
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};