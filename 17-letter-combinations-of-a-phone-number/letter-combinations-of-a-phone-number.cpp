class Solution {
private:
    void backtrack(string &digits, int index, string &curr, vector<string> & map, vector<string> &res){
        if(index==digits.length()){
            res.push_back(curr);
            return;
        }
        int digit = digits[index] - '0';
        string letters = map[digit];
        for(auto c:letters){
            curr.push_back(c);
            backtrack(digits, index+1, curr, map, res);
            curr.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())return res;
        vector<string> map = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };
        string curr;
        backtrack(digits, 0, curr, map, res);
        return res;
    }
};