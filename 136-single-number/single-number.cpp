class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //Time -> O(nlogn)
        // sort(nums.begin(), nums.end());
        // for(int i = 1; i < nums.size(); i+=2)
        // {
        //     if(nums[i]!=nums[i-1])
        //         return nums[i-1];
        // }
        // return nums[nums.size()-1];

        int a = 0;
        for(auto &i : nums)
            a ^= i;
        return a;
        //Complete in O(n) time
    }
};