
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        vector<int> fq(n+1, 0);
        for(int i = 0; i<nums.size(); i++){
            fq[nums[i]]++;
        }
        for(int i = 1; i<nums.size()+1; i++){
            if(fq[i]>1){
                ans[0]=i;
            }
            if(fq[i]==0){
                ans[1]=i;
            }
        }
        return ans;
    }
};