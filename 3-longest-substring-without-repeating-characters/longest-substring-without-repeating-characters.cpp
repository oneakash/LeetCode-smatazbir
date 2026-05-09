class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int l = 0;
        vector<int> seen(256, -1);
        for(int r = 0; r<s.size(); r++){
            char c = s[r];
            if(seen[c]>=l){
                l = seen[c]+1;
            }
            seen[c]=r;
            max_len = max(max_len, r-l+1);
        }
        return max_len;
    }
};