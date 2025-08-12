class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count1,count2;
        for(char c: s){
            count1[c]++;
        }
        for(char c: t){
            count2[c]++;
        }
        if(count1 == count2){
            return true;
        }
        return false;
    }
};