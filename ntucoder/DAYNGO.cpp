#include <iostream>
#include <vector>

using namespace std;

// Hàm đệ quy để sinh các dãy ngoặc đúng
void generateParentheses(vector<string> &result, string current, int open, int close, int n)
{
    if (current.length() == n * 2)
    {
        result.push_back(current);
        return;
    }

    if (open < n)
    {
        generateParentheses(result, current + "(", open + 1, close, n);
    }
    if (close < open)
    {
        generateParentheses(result, current + ")", open, close + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> result;
    generateParentheses(result, "", 0, 0, n);

    for (const string &sequence : result)
    {
        cout << sequence << endl;
    }

    cout << result.size() << endl;

    return 0;
}
