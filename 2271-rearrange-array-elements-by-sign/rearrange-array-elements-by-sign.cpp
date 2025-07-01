class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //Time -> O(n), Space -> O(n)
        // vector<int> ve, vo, v;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i]<0)
        //         vo.push_back(nums[i]);
        //     else
        //         ve.push_back(nums[i]);
        // }
        // for(int i= 0; i < nums.size()/2; i++)
        // {
        //     v.push_back(ve[i]);
        //     v.push_back(vo[i]);
        // }
        // return v;

        vector<int> res(nums.size(),0);
        int p = 0, n = 1;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<0)
            {
                res[n] = nums[i];
                n+=2;
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