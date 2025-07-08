class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //TLE
        // while(k--)
        // {
        //     nums.insert(nums.begin(), *(nums.end()-1));
        //     nums.pop_back();
        // }

        // Space O(n)
        // int n = nums.size();
        // vector<int> b(n);
        // for(int idx = 0; idx < n; idx++)
        // {
        //     b[(idx+k)%n] = nums[idx];
        // }
        // nums = b;

        int n=nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};