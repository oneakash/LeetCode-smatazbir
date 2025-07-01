class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ve, vo, v;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]<0)
                vo.push_back(nums[i]);
            else
                ve.push_back(nums[i]);
        }
        for(int i= 0; i < nums.size()/2; i++)
        {
            v.push_back(ve[i]);
            v.push_back(vo[i]);
        }
        return v;
    }
};