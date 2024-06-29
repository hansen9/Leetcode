#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        // create an empty stack and then 
        // traverse the input char by char
        // check for opening bracket and push in to stack
        // if the current char is closing bracket -> isStackEmpty ? return false : pop stack and check matching bracket
        // isMatching ? continue traversing :  return false
        // isStackEmpty ? return true : false
        stack<char> st;
        
        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[' )
            {
                st.push(c);
            }
            else
            {
                if(st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == ']' && st.top() != '[') || 
                    (c == '}' && st.top() != '{')
                    )
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};