class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> dict;
        for(char c:magazine){
            if(dict.find(c)==dict.end()){
                dict[c]=1;
            }else dict[c]++;
        }
        for(char c:ransomNote){
            if(dict.find(c)!=dict.end() && dict[c]>0)
                dict[c]--;
            else return false;
        }
        return true;
    }
};