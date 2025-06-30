class Solution {
public:
    char findTheDifference(string s, string t) {
        int fqs[27]={0};
        int fqt[27]={0};
        int i;
        for(i = 0; i < s.size(); i++)
        {
            fqs[s[i]-'a' + 1]++;
            fqt[t[i] - 'a' + 1]++;
        }
        fqt[t[i] - 'a' + 1]++;
        for(int j = 0; j < 27; j++)
        {
            if(fqt[j]>fqs[j])
                return j + 'a' - 1;
        }
        return '0';
    }
};