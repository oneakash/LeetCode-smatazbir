class Solution {
public:
    typedef long long ll;
    bool isSpace(char x){
        return x==' ';
    }
    int myAtoi(string s) {
        int n=s.size(),i=0;
        while(i<n && isSpace(s[i])){
            i++;
        }
        int sin=1;
        if(i<n && s[i]=='-'||s[i]=='+'){
            if(s[i]=='-')sin=-1;
            else sin=1;i++;
        }
        ll r=0;
        while(i<n && isdigit(s[i])){
            r = r*10+s[i]-'0';
            if(r>INT_MAX){
                if(sin==1){
                    return INT_MAX;
                }
                else return INT_MIN;
            }i++;
        }
        return (int)(r*sin);
    }
};