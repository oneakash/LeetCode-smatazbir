class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),lo=0,hi=n-1;
        if(n==1 || n==2 || nums[0]!=nums[1])
            return nums[0];
        else if(nums[n-2]!=nums[n-1])
            return nums[n-1];
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return nums[mid];
            if(nums[mid]==nums[mid-1]){
                if((mid-1)%2)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            else
            {
                if((mid+1)%2)
                    lo=mid+1;
                else
                    hi=mid-1;
            }
        }
        return 0;
    }
};

// [3,3,4,4,7,7,10,11,11]