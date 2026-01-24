class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size(), i = 0, j = 0;
        while(i<n){
            bool p = false;
            while(j<m){
                if(s[i]==t[j]){
                    j++;
                    p = true;
                    break;
                }
                j++;
            }
            if(p){
                i++;
            }else return false;
        }
        return true;
    }
};