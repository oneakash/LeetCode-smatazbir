class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // HashMap
        // unordered_map<int,int> ump;
        // for(int i = 0; i<nums.size(); i++){
        //     if(ump.find(nums[i])!=ump.end()){
        //         if(i-ump[nums[i]]<=k)return true;
        //     }
        //     ump[nums[i]]=i;
        // }
        // return false;

        // SlidingWindow
        unordered_set<int> window;
        for(int i = 0; i<nums.size(); i++){
            if(i>k)window.erase(nums[i-k-1]);
            if(window.count(nums[i]))
                return true;
            window.insert(nums[i]);
        }
        return false;
    }
};