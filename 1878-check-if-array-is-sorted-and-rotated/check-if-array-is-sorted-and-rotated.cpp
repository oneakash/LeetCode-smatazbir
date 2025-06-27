class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        // NaiveApprach
        // vector<int> b(n);
        // for(int x = 0; x < n; x++){
        //     int curi = 0;
        //     for(int i = x; i < n; i++)
        //     {
        //         b[curi++] = nums[i];
        //     }
        //     for(int i = 0; i < x; i++)
        //     {
        //         b[curi++] = nums[i];
        //     }
        //     bool sorted = true;
        //     for(int i = 0; i < n-1; i++)
        //     {
        //         if(b[i]>b[i+1])
        //         {
        //             sorted = false;
        //             break;
        //         }
        //     }
        //     if(sorted)
        //         return true;
        // }
        // return false;

        //MyApproach
        int c = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i]<nums[i-1])
                c++;
            if(c>1)
                return false;
        }
        if(nums[0]<nums[n-1])
            c++;
        return c < 2;
    }
};