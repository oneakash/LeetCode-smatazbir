class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned int x = start^goal;
        return popcount(x);
    }
};