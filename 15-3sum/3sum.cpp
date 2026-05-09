class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size()-2;i++){
            
            int l = nums[i];
            if(l>0)break;
            int m = i+1, r = nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(m<r){
                vector<int> v;
                int val = l+nums[m]+nums[r];
                if(val==0){
                    v.push_back(l);
                    v.push_back(nums[m]);
                    v.push_back(nums[r]);
                    res.push_back(v);
                    while(m<r && nums[m]==nums[m+1])m++;
                    while(m<r && nums[r]==nums[r-1])r--;
                    m++,r--;
                }else if(val>0){
                    r--;
                }else{
                    m++;
                }
            }
        }
        return res;
    }
};