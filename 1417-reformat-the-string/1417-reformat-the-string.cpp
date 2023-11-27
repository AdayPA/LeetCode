class Solution {
public:
string reformat(string s)
{
    vector<int> numbers;
    vector<char> letters;
    string result;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) >= '0' && s.at(i) <= '9')
        {
            numbers.push_back(s.at(i) - '0');
        }
        else
        {
            letters.push_back(s.at(i));
        }
    }

    if (numbers.size() == 0 && letters.size() > 1 ||
        numbers.size() > 1 && letters.size() == 0 ||
        abs(static_cast<int>(numbers.size()) - static_cast<int>(letters.size())) > 1)
    {
        return "";
    }
    else
    {
        if (numbers.size() > letters.size())
        {
            for (int i = 0; i < letters.size(); i++)
            {
                result += std::to_string(numbers.at(i));
                result += letters.at(i);
            }
            result += std::to_string(numbers.at(numbers.size() - 1));
        }
        else if (numbers.size() < letters.size())
        {
            for (int i = 0; i < numbers.size(); i++)
            {
                result += letters.at(i);
                result += std::to_string(numbers.at(i));
            }
            result += letters.at(letters.size() - 1);
        }
        else
        {
            for (int i = 0; i < numbers.size(); i++)
            {
                result += letters.at(i);
                result += std::to_string(numbers.at(i));
            }
        }
        return result;
    }
}
};