class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1;
        while(i < n-1 && j < n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};