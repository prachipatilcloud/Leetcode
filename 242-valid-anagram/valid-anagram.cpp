class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count1,count2;

        for(char ch : s){
            count1[ch]++;
        }
        for(char ch : t){
            count2[ch]++;
        }

        if(count1 == count2){
            return true;
        }
        return false;
    }
};