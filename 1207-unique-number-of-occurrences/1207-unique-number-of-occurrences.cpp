class Solution {
public:
bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> m;
    std::map<int, int> aux_map;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    for (const auto &pair : m)
        ++aux_map[pair.second];
    const int max_frequency = !aux_map.empty() ? aux_map.rbegin()->first : 0;
    for (const auto &pair : m)
    {
        std::cout << pair.first << ' ' << pair.second;
        const int num_times = aux_map[pair.second];
        if (num_times > 1)
            return false;
    }
    return true;
}
};