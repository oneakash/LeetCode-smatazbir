class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mw = 0, n = sentences.size();
        for(int i = 0; i < n; i++)
        {
            int c = 1;
            for(int j = 0; j < sentences[i].size(); j++)
            {
                if(sentences[i][j]==' ')
                    c++;
            }
            mw = max(mw, c);
        }
        return mw;
    }
};