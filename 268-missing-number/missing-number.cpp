class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = n+1;
        int f[10009] = {0};
        for(int i = 0; i < n; i++)
        {
            f[nums[i]]++;
        }
        int j;
        for(j = 0; j < x; j++)
        {
            if(f[j]==0)
                return j;
        }
        return -1;
    }
};