class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(),lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
                return true;
            if(nums[mid]==nums[lo] && nums[mid]==nums[hi])
            {
                lo++;hi--;continue;
            }
            if(nums[lo]<=nums[mid])
            {
                if(nums[mid]>target && nums[lo]<=target)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            else
            {
                if(nums[mid]<target && nums[hi]>=target)
                    lo=mid+1;
                else
                    hi=mid-1;
            }
        }
        return false;
    }
};