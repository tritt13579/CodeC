#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    int n, i;
    stack<int> s;
    cin >> n;
    for (i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            s.push(i);
            n /= i;
        }
    }
    if (n != 1)
        s.push(n);
    while (s.size() != 1)
    {
        cout << s.top() << "*";
        s.pop();
    }
    cout << s.top();
}