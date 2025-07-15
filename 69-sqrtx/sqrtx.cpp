class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x,a=0;
        while(s<=e){
            int mid=(s+e)>>1;
            long long sq=(long long)mid*mid;
            if(sq==x)return mid;
            if(sq<x){
                s=mid+1;a=mid;
            }
            else e=mid-1;
        }
        return a;
    }
};