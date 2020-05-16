class Solution {
public:
    bool isValid(string s) {
         stack<char> stack;
        
        for (int i=0; i<s.length(); ++i) {
                 if (s[i] == '(') stack.push(')');
            else if (s[i] == '{') stack.push('}');
            else if (s[i] == '[') stack.push(']');
            else if (stack.empty() || stack.top() != s[i]) return false;
            else stack.pop();
        }
        return stack.empty();
    }
};
