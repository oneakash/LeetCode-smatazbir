class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2)
            return false;
        int a1[27]={0};
        int a2[27] = {0};
        for(int i = 0; i < n1; i++)
        {
            a1[s[i]-'a'+1]++;
            a2[t[i]-'a'+1]++;
        }
        for(int i = 1; i < 27; i++)
        {
            if(a1[i]!=a2[i])
                return false;
        }
        return true;
    }
};