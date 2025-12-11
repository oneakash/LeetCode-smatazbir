class Solution {
public:
    int longestPalindrome(string s) {
        int oc = 0;
        unordered_map<char, int> ump;
        for(char ch:s){
            ump[ch]++;
            if(ump[ch]%2)
                oc++;
            else
                oc--;
        }
        if(oc>1)
            return s.size()-oc+1;
        return s.size();
    }
};