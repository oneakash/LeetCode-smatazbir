class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2)return n;
        int l = 1, r = 1, c = 0;
        while(r<n){
            if(nums[r]==nums[r-1])c++;
            else c = 0;
            if(c<2){
                nums[l]=nums[r];l++;
            }
            r++;
        }
        return l;
    }
};