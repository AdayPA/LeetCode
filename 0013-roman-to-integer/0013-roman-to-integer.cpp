class Solution {
public:
int romanToInt(const std::string& s) {
    std::map<char, int> mymap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
    int value = 0;
    bool getTuple = false;

    const size_t length = s.length();
    size_t i = 0;

    while (i < length) {
        const auto& inc_1 = mymap.at(s[i]);
        value += inc_1;

        if ((i + 1) < length) {
            const auto& inc_2 = mymap.at(s[i + 1]);
            if (inc_1 < inc_2) {
                value -= inc_1;
                value += inc_2 - inc_1;
                getTuple = true;
            }
        }

        i += (getTuple ? 2 : 1);
        getTuple = false;
    }

    return value;
}
};