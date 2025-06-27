class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //TLE
        // while(k--)
        // {
        //     nums.insert(nums.begin(), *(nums.end()-1));
        //     nums.pop_back();
        // }

        int n = nums.size();
        vector<int> b(n);
        for(int idx = 0; idx < n; idx++)
        {
            b[(idx+k)%n] = nums[idx];
        }
        nums = b;
    }
};