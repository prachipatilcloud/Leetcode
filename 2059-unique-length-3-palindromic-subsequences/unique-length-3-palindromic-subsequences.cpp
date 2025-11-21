class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        map<char, vector<int>> indices;
        for(int i = 0; i<n; i++){
            indices[s[i]].push_back(i);
        }

        int ans = 0;
        for(char t = 'a'; t<= 'z'; t++) if(indices[t].size() >=2 ){
            for(char m = 'a'; m<= 'z'; m++) if(indices[m].size() >=1 ){
                    for(auto &i: indices[m]){
                        if(i > indices[t][0] && i < indices[t].back()){
                            ans++;
                            break;
                        }
                    }
                }
        }
        return ans;
    }
};