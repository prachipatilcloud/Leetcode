class Solution {
public:
    string nextTerm(string& prev) {
        string curr="";
        int count =1;
    
        for (int i = 1; i < prev.length(); i++) {
        if (prev[i] == prev[i-1]) {
            count++;
        } else {
            curr += to_string(count) + prev[i - 1];
            count =1;
        }
    }
    curr += to_string(count) + prev.back();
    
    return curr;
}

    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string prev = countAndSay(n - 1);
        return nextTerm(prev);
    }
};