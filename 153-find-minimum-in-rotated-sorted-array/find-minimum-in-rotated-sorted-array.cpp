class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),s=0,e=n-1,a=INT_MAX;
        if(nums[s]<=nums[e])
            return nums[s];
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[s]<=nums[mid])
            {
                a=min(a,nums[s]);
                s=mid+1;
            }
            else
            {
                a=min(a,nums[mid]);
                e=mid-1;
            }
        }
        return a;
    }
};