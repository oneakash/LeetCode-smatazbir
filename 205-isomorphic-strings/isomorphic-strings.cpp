class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> stot;
        unordered_map<char, char> ttos;
        for(int i=0;i<s.size();i++){
            char sch=s[i];
            char tch=t[i];
            if(stot.count(sch) && stot[sch]!=tch)
                return false;
            if(ttos.count(tch) && ttos[tch]!=sch)
                return false;
            stot[sch]=tch;
            ttos[tch]=sch;
        }
        return true;
    }
};