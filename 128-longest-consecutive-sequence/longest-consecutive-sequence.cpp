class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), le = INT_MIN, c =0, a = 1;
        if(n<1)
            return 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(le == nums[i]-1){
                c++;
                
                le = nums[i];
            }
            else if(le != nums[i]){
                c=1;
                le = nums[i];
            }
            a = max(a,c);
        }
        return a;
    }
};