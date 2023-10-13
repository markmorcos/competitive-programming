class Solution {
private:
    bool isOpening(char c) {
        return c == '(' || c == '{' || c == '[';
    }
    bool isMatching(char c, char d) {
        return c == '(' && d == ')' || c == '{' && d == '}' || c == '[' && 
d == ']';
    }
public:
    bool isValid(string s) {
        vector<char> stack;
        for (int i = 0; i < s.size(); ++i) {
            if (isOpening(s[i])) stack.push_back(s[i]);
            else if (stack.empty() || !isMatching(stack.back(), s[i])) 
return false;
            else stack.pop_back();
        }
        return stack.empty();
    }
};
