class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> ust;
        for(int i=0;i<nums.size();i++)
        {
            if(ust.find(nums[i])!=ust.end())
                return nums[i];
            else
                ust.insert(nums[i]);
        }
        return 0;
    }
};