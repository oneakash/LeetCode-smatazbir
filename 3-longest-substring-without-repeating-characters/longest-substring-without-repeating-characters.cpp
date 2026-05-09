class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int ans = 0;
        unordered_map<char,int> mp;
        for(int i= 0; i<s.size(); i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=i;
                res++;
                ans = max(res, ans);
            }
            else{
                ans = max(res, ans);
                res = 0;
                int idx = mp[s[i]];
                i = idx;
                mp.clear();
            }
        }
        return ans;
    }
};