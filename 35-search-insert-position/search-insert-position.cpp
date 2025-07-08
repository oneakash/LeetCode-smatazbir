class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),lo=0,hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
            {
                lo=mid+1;
            }
            else
            {
                n=mid;
                hi=mid-1;
            }
        }
        return n;
    }
};