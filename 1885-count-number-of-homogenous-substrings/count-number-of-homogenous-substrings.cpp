class Solution {
public:
    int countHomogenous(string s) {
        char pre=' ';
        int r=0, c=0, mod=1e9+7;
        for(char a:s){
            if(a==pre)
                c++;
            else
                c=1;
            pre=a;
            r=(r+c)%mod;
        }
        return r;
    }
};