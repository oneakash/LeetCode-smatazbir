class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto new_end = remove(nums.begin(), nums.end(), 0);
        fill(new_end, nums.end(), 0);
    }
};