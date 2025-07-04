class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result= "";
        while(columnNumber > 0){
            columnNumber--;
            int rem = columnNumber % 26;
            result += ('A'+rem);
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};