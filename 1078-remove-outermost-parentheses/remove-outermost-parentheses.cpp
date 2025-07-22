class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string r;
        int c=0,x=0,it;
        for(int i=0;i<n;i++){
            r+=s[i];
            if(i==0)r.pop_back();
            if(s[i]=='(')
                c++;
            if(s[i]==')')c--;
            if(c==0){
                r.pop_back();
                x=1;it=i;
            }
            if(x==1 && i==it+1){
                r.pop_back();
                x=0;
            }
        }
        return r;
    }
};