class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int p = 0, neg = 1;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]<0)
            {
                res[neg] = nums[i];
                neg+=2;
            }
            else
            {
                res[p] = nums[i];
                p+=2;
            }
        }
        return res;
    }
};