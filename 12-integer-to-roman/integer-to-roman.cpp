class Solution {
public:
    string intToRoman(int num) {
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X","IX","V", "IV", "I"};
        int values[]     = {1000, 900, 500, 400, 100, 90,  50,  40,  10,  9, 5, 4,1};
        string res = "";

        for (int i = 0; i < 13 && num > 0; i++) {
            while (num >= values[i]) {
                num -= values[i];
                res += symbols[i];
            }
        }
        return res;
    }
};