class Solution {
public:
    int rchartoi(char x){
        switch(x){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int c=rchartoi(s[s.size()-1]);
        for(int i=s.size()-2;i>=0;i--){
            if(rchartoi(s[i])<rchartoi(s[i+1]))c-=rchartoi(s[i]);
            else c+=rchartoi(s[i]);
            cout<<c<<endl;
        }
        return c;
    }
};