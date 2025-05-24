class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> m;

        for(int i = 0; i<n; i++){
            if(words[i].contains(x)){
                m.push_back(i);
            }
        }
        return m;
    }
};