class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        string s;

        for(int i =0;i<n; i++){
            if(needle[0] == haystack[i]){
                s = haystack.substr(i,m);
                if(s == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};