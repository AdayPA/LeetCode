class Solution {
public:
std::vector<int> plusOne(std::vector<int> &digits)
{
    int n = digits.size();
    bool allNines = true;
    for (int digit : digits)
    {
        if (digit != 9)
        {
            allNines = false;
            break;
        }
    }
    if (allNines)
    {
        std::vector<int> result(n + 1, 0);
        result[0] = 1;
        return result;
    }
    int carry = 1;
    for (int i = n - 1; i >= 0 && carry > 0; --i)
    {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0)
    {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

};