#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i)
        cin >> heights[i];

    for (int i = m; i > 0; --i)
    {
        for (int j = 0; j < n; ++j)
            if (heights[j] >= i)
                cout << "#";
            else
                cout << ".";
        cout << endl;
    }

    return 0;
}
