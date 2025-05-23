class Solution {
public:
    vector<string> validParenthesis(vector<string>& a,string s ,int oc, int cc, int n) {

        if(s.size() == 2*n){
            a.push_back(s);
            return a;
        }

        if(oc < n) {
            validParenthesis(a, s+'(', oc+1, cc, n);
        }
        if(cc < oc) {
            validParenthesis(a, s+')', oc, cc+1, n);
        }
        return a;
    }
    vector<string> generateParenthesis(int n){
        vector<string> a;
        validParenthesis(a, "", 0, 0, n);
        return a;
    }
};