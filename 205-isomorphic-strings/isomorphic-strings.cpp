class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> mapST, mapTS;

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i], c2 = t[i];

            // Check if mapping s → t is consistent
            if (mapST.count(c1)) {
                if (mapST[c1] != c2) return false;
            } else {
                mapST[c1] = c2;
            }

            // Check if mapping t → s is consistent (no two s chars map to same t char)
            if (mapTS.count(c2)) {
                if (mapTS[c2] != c1) return false;
            } else {
                mapTS[c2] = c1;
            }
        }

        return true;
    }
};