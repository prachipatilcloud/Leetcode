class Solution {
public:
    bool isPalindrome(string s) {
        return helper(s, 0, s.length() - 1);
    }

    bool helper(string& s, int left, int right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (left >= right) return true;
        if (tolower(s[left]) != tolower(s[right])) return false;

        return helper(s, left + 1, right - 1);
    }
};
