class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int x = nums[i];
            while(i+1<n && nums[i]+1==nums[i+1]){
                i++;
            }
            int y = nums[i];
            if(x==y)v.push_back(to_string(x));
            else{
                string s = "";
                s+=to_string(x);
                s+="->";
                s+=to_string(y);
                v.push_back(s);
            }
        }
        return v;
    }
};