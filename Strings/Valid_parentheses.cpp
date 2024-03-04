class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (ch == '(' || ch == '[' || ch == '{')
            {
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    char top = st.top();

                    if ((ch == ')' && top == '(') ||
                        (ch == ']' && top == '[') ||
                        (ch == '}' && top == '{'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        // After processing the entire string, if the stack is empty, it means all brackets were properly closed.
        // Otherwise, if there are unmatched opening brackets left in the stack, it's invalid.
        // if(st.empty()){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return st.empty();
    }
};



Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
