class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int r = 0, psum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            psum += nums[i];
            if(psum == k)
                r++;
            if(mp.find(psum - k)!=mp.end())
                r+=mp[psum-k];
            mp[psum]++;
        }
        return r;
    }
};