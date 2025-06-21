class Solution {
public:
    bool isNumber(string s) {
        int i=0, n = s.size();

        while(i<n && isspace(s[i])) i++;
        if(i<n && (s[i]=='+' || s[i]=='-')) i++;
        bool isNumeric = false, isDot = false, isExp = false;

         while (i < n) {
            if (isdigit(s[i])) {
                isNumeric = true;
            } else if (s[i] == '.') {
                if (isDot || isExp) return false;
                isDot = true;
            } else if (s[i] == 'e' || s[i] == 'E') {
                if (isExp || !isNumeric) return false;
                isExp = true;
                isNumeric = false; 
                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
            } else if (s[i] == '+' || s[i] == '-') {
                return false; 
            } else if (isspace(s[i])) {
                break;
            } else {
                return false;
            }
            i++;
        }
        while (i < n && isspace(s[i])) i++;
        return isNumeric && i == n;
    }
};