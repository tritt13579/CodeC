#include <bits/stdc++.h>

using namespace std;

int tinh(string bt)
{
    stack<int> st;

    istringstream iss(bt);
    string s;

    while (iss >> s)
    {
        if (isdigit(s[0]))
            st.push(stoi(s));
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (s == "+")
                st.push(a + b);
            else if (s == "-")
                st.push(a - b);
            else if (s == "*")
                st.push(a * b);
        }
    }

    return st.top();
}

int main()
{
    string bt;
    getline(cin, bt);

    cout << tinh(bt);

    return 0;
}
