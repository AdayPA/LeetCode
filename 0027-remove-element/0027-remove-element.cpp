class Solution {
public:
int removeElement(vector<int> &nums, int val)
{
    vector<int> result;
    int counter = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == val) {
        } else {
            counter++;
            result.push_back(nums.at(i));
        }
    }
    nums = result;
    return counter;
}
};