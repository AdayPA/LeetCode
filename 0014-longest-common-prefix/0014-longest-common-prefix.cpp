#include <algorithm>

class Solution {
public:
string longestCommonPrefix(vector<string> &strs)
{
        if (strs.empty() || strs[0].empty()) {
        return "";
    }
    std::string resultado;
    for (int pos_char = 0; pos_char < strs[0].size(); ++pos_char) {
        char caracterActual = strs[0][pos_char];
        for (int i_vector = 1; i_vector < strs.size(); ++i_vector) {
            if (pos_char >= strs[i_vector].size() || strs[i_vector][pos_char] != caracterActual) {
                return resultado;
            }
        }

        resultado += caracterActual;
    }
    return resultado;
}
};