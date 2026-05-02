#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s)
{
    stack<char> st;
    map<char, char> matching = {{')', '('}, {'}', '{'}, {']', '['}};
    for (char c : s)
    {

        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {

            if (st.empty() || st.top() != matching[c])
            {
                return "NO";
            }
            st.pop();
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        cout << isBalanced(s) << endl;
    }

    return 0;
}
