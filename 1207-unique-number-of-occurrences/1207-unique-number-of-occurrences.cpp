class Solution {
public:
bool uniqueOccurrences(const std::vector<int> &arr)
{
    std::unordered_map<int, int> frequencyMap;

    for (int num : arr)
    {
        frequencyMap[num]++;
    }

    std::unordered_set<int> uniqueFrequencies;
    for (const auto &pair : frequencyMap)
    {
        if (!uniqueFrequencies.insert(pair.second).second)
        {

            return false;
        }
    }

    return true;
}
};