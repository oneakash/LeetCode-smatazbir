class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> nmap;
        for(int i = 0; i < n; i++)
        {
            nmap[nums[i]]=i;
        }
        for(int i = 0; i < n; i++)
        {
            int x = target - nums[i];
            if(nmap.find(x) != nmap.end() && nmap[x]!=i)
            {
                return {i, nmap[x]};
            }
        }
        return {};
    }
};