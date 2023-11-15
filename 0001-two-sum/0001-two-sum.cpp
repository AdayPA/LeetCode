class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_indices;
        for (int i = 0; i < nums.size(); ++i) {
            int complemento = target - nums[i];
            if (num_indices.find(complemento) != num_indices.end()) {
                return {num_indices[complemento], i};
            }
            num_indices[nums[i]] = i;
        }
        return {};
    }
};