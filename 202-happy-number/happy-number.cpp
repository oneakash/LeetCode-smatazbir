class Solution {
private:
    int ssd(int n){
        int t = 0;
        while(n>0){
            int r = n%10;
            t += r*r;
            n/=10;
        }
        return t;
    }
public:
    bool isHappy(int n) {
        int s = n, f = ssd(n);
        while(s != 1 && f != 1 && s!=f){
            s = ssd(s);
            f = ssd(ssd(f));
        }
        return f==1 || s==1;
    }
};