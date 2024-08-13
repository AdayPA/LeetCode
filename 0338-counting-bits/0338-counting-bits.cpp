class Solution {
public:
    vector<int> countBits(int n) {
    vector<int> temp;
    temp.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cout << __builtin_popcount(i);
        temp.push_back((int)__builtin_popcountll(i));
    }
    return temp;
    }
};