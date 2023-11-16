class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        std::unordered_map<char, int> charIndexMap;
        // Initialize two pointers for the sliding window
        int left = 0, right = 0;
        while (right < n) {
            // If the character is not in the current substring, expand the window to the right
            if (charIndexMap.find(s[right]) == charIndexMap.end() || charIndexMap[s[right]] < left) {
                maxLength = std::max(maxLength, right - left + 1);
            } else {
                // If the character is in the current substring, move the left pointer to the right of the last occurrence
                left = charIndexMap[s[right]] + 1;
            }
            // Update the last occurrence index of the character
            charIndexMap[s[right]] = right;
            // Move the right pointer to the next character
            right++;
        }
        return maxLength;
    }
};