class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> ctow;
        unordered_map<string, char> wtoc;
        stringstream ss(s);
        string word;
        int i = 0, n = pattern.size();
        while(ss>>word){
            if(i>=n)return false;
            char c = pattern[i];
            if(ctow.count(c) && ctow[c]!=word)
                return false;
            if(wtoc.count(word) && wtoc[word]!=c)
                return false;
            ctow[c]=word;
            wtoc[word]=c;
            i++;
        }
        return i==n;
    }
};