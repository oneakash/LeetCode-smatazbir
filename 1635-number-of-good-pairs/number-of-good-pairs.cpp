class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> ump;
        int res = 0;
        for(int i:nums){
            res+=ump[i]++;
        }
        return res;
    }
};