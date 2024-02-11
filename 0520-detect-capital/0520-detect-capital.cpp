class Solution {
public:
    bool detectCapitalUse(string word) {
        if (isAllUpperCase(word))
            return true;

        if (isAllLowerCase(word))
            return true;
        
        if (isFirstCapital(word))
            return true;
        
        return false;
    }
    
    bool isAllUpperCase(const string& word) {
        for (char c : word) {
            if (!isupper(c))
                return false;
        }
        return true;
    }
    
    bool isAllLowerCase(const string& word) {
        for (char c : word) {
            if (!islower(c))
                return false;
        }
        return true;
    }
    
    bool isFirstCapital(const string& word) {
        return isupper(word[0]) && isAllLowerCase(word.substr(1));
    }
};