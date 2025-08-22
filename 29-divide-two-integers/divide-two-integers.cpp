class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)return 1;
        bool isPos=(dividend<0==divisor<0);
        unsigned int a = dividend==INT_MIN ? dividend : abs(dividend), b = divisor==INT_MIN ? divisor : abs(divisor), res=0;
        while(a>=b){
            short q=0;
            while(a>(b<<(q+1)))q++;
            res+=(1<<q);
            a-=(b<<q);
        }
        if(res == (1<<31) && isPos) return INT_MAX;
        return isPos ? res : -res;
    }
};