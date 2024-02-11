class Solution {
public:
    int findComplement(int num) {
        int numBits = 0;
        int temp = num;
        while (temp > 0) {
            numBits++;
            temp >>= 1;
        }
        unsigned int bitmask = (1u << numBits) - 1;
        return num ^ bitmask;
    }
};