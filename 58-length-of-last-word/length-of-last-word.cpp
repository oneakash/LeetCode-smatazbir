class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), f = 0, l = 0;
        for(int i = n-1; i>=0; i--){
            if(s[i]!=' '){
                f = 1;
            }
            if(f && s[i]!=' '){
                l++;
            }
            if(f && s[i]==' ')break;
        }
        return l;
    }
};