class Solution {
public:
int removeDuplicates(vector<int> &nums){
    if (nums.empty()) {
        return 0;
    }

    int unique = 1;  // At least one unique element

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[unique++] = nums[i];
        }
    }

    nums.resize(unique);
    return unique;
}
};