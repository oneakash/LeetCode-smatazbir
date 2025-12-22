class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for(int i = 0; i<n; i++){
            ump[nums[i]]++;
        }
        for(auto i = ump.begin(); i!=ump.end(); i++){
            int v = i->second;
            if(v>1){
                return true;
            }
        }
        return false;
    }
};