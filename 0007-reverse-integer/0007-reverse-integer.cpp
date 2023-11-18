class Solution {
public:
int reverse(int x)
{
    int x_reduced;
    long result = 0;
    while (x)
    {
        x_reduced = x % 10;
        x = x / 10;
        result = result * 10 + x_reduced;
    }
    if (result > (pow(2, 31) - 1) || result < -pow(2, 31))
    {
        return 0;
    }
    return result;
}

};