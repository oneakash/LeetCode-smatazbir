class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),lo=0,hi=n-1,f=-1,l=-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                f=mid;
            }
            if(nums[mid]>target)
                hi=mid-1;
            else
                lo=mid+1;
        }
        if(f == -1)
            return {f, l};
        lo=0, hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]>=target)
            {
                f=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        lo=0,hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]<=target)
            {
                l=mid;
                lo=mid+1;
            }
            else
                hi=mid-1;
        }
        return {f,l};
    }
};