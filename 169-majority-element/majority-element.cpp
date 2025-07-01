class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Time -> O(n), Space -> O(n)
        // unordered_map<int, int> mp;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     mp[nums[i]]++;
        // }
        // for(int i=0; i < nums.size(); i++)
        // {
        //     if(mp[nums[i]]>(nums.size()/2))
        //         return nums[i];
        // }
        // return 0;

        //Time -> O(n), Space -> O(1);
        //Moor Voting  Algorithm
        int count = 0;
        int candidate = 0;
        for(int i : nums)
        {
            if(count == 0)
                candidate = i;
            if(candidate == i)
                count++;
            else
                count--;
        }
        return candidate;
    }
};