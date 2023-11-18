class Solution {
public:
int lengthOfLastWord(string s)
{
    bool end_space = false;
    int lenght = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s.at(i) != ' ' && !end_space)
        {
            end_space = true;
        }
        if (s.at(i) != ' ' && end_space)
        {
            lenght++;
        }
        if (s.at(i) == ' ' && end_space) {
            return lenght;
        }
    }
    return lenght;
}
};