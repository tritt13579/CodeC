#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    if (n == 0)
        cout << "0";
    while (n != 0)
    {
        s.push(n % 2);
        n /= 2;
    }
    while (s.size() != 0)
    {
        cout << s.top();
        s.pop();
    }
}