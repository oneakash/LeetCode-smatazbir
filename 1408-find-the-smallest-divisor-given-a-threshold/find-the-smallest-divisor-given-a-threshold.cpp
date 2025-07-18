class Solution {
    int sum(vector<int> &nums, int div){
        long long s=0;
        for(auto num:nums){
            s+=(num+div-1)/div;
        }
        return s;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1;
        int hi=*max_element(nums.begin(),nums.end());
        int a=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(sum(nums,mid)<=threshold){
                a=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return a;
    }
};