class Solution {
public:
    string reverseWords(string s) {
        string t="",r="";
        int n=s.size();
        int l=0;
        while(l<n){
            char c=s[l];
            if(c!=' ')
            t+=c;
            else if(t!=""){
                if(r!="")r=t+" "+r;
                else r=t;t="";
            }
            l++;
        }
        if(t!=""){
            if(r!="")r=t+" "+r;
            else r=t;t="";
        }
        return r;
    }
};