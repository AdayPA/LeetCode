class Solution {
public:
int romanToInt(string s)
{
    map<char, int> mymap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
    int value = 0;
    bool getTuple = false;
    for (size_t i = 0; i < s.length(); i+= (getTuple ? 2 : 1)){
        getTuple = false;
        auto inc_1 = mymap.find(s.at(i));
        value += inc_1->second;
        if ((i+1) < s.length()){
            auto inc_2 = mymap.find(s.at(i+1));
            if (inc_1->second < inc_2->second) {
                value -= inc_1->second;
                value += inc_2->second - inc_1->second;
                getTuple = true;
            } 
        }
    }
    return value;
}
};