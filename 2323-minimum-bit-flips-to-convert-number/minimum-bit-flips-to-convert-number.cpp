class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned int x = start^goal,res=0;
        while(x){
            if(x&1)res++;
            x=x>>1;
        }
        return res;
    }
};