class Solution {
public:
    int titleToNumber(string col) {
        int num=0, n = col.size();
        for(int i =n-1; i>=0; i--){
            num += (col[i]-'A'+1)*pow(26, n - i - 1);
        }
        return num;
    }
};