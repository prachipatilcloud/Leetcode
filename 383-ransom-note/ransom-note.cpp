class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> count;
        for(char ch: magazine){
            count[ch]++;
        }
        for(char c: ransomNote){
            if(count[c] == 0)
            return false;
            count[c]--;
        }
        return true;
    }
};