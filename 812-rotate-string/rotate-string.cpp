class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m)return false;
        else return (s+s).find(goal)<s.size();
    }
};