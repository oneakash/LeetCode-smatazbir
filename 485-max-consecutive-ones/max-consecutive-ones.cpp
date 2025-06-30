class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mo = 0, c = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==1){
                c++;
                mo = max(mo, c);
            }
                
            else
                c = 0;
        }
        return mo;
    }
};