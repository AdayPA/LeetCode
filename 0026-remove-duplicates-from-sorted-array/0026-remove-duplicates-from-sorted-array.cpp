class Solution {
public:
int removeDuplicates(vector<int> &nums)
{   
    int actual_num;
    int unique = 0;
    vector<int> myvector;
    for (int i = 0; i < nums.size(); i++) {
        if (actual_num != nums.at(i)) {
            unique++;
            myvector.push_back(nums.at(i));
            actual_num = nums.at(i);
        }else {

        }
    }
    nums = myvector;
    return unique;
}
};