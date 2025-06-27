class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> b(n);
        for(int x = 0; x < n; x++){
            int curi = 0;
            for(int i = x; i < n; i++)
            {
                b[curi++] = nums[i];
            }
            for(int i = 0; i < x; i++)
            {
                b[curi++] = nums[i];
            }
            bool sorted = true;
            for(int i = 0; i < n-1; i++)
            {
                if(b[i]>b[i+1])
                {
                    sorted = false;
                    break;
                }
            }
            if(sorted)
                return true;
        }
        return false;
    }
};