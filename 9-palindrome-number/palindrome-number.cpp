class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(!x)return true;
        string s = "";
        while(x){
            s+=(char)(x%10);
            x/=10;
        }
        string sp = s;
        reverse(sp.begin(),sp.end());
        return s==sp;
    }
};