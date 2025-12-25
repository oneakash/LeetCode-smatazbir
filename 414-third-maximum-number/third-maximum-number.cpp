class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if (s.size() < 3) {
            return *s.rbegin(); // largest element
        }
        auto it = s.rbegin();
        advance(it, 2); // move to third largest
        return *it;
    }
};