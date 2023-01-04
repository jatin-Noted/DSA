#include <bits/stdc++.h>
using namespace std;

bool matches(char a, char b)
{
    if ((a == ')' && b == '(') || (a == '}' && b == '{') || (a == ']' && b == '['))
    {
        return true;
    }
    return false;
}

bool isValidParenthesis(string exp)
{
    stack<char> st;

    for (int i = 0; i < exp.size(); i++)
    {

        if (exp.at(i) == '{' || exp.at(i) == '[' || exp.at(i) == '(')
        {
            st.push(exp[i]);
        }
        else if(exp.at(i) == '}' || exp.at(i) == ']' || exp.at(i) == ')')
        {
            if (!st.empty())
            {
                char ch = st.top();
                if (matches(exp[i], ch))
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
    if (st.empty())
    {
        return true;
    }
    return false;
}

int main()
{

    string exp = "{([a+b]*c)-f}";
    if (isValidParenthesis(exp))
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}