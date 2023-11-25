#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int y, x, ty, tx;
    cin >> y >> x >> ty >> tx;

    if (y == ty && x == tx)
    {
        cout << 0 << endl;
        return 0;
    }

    if (abs(y - ty) % 2 != 0 && abs(x - tx) % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    if ((y + x) % 2 != (ty + tx) % 2)
    {
        cout << -1 << endl;
        return 0;
    }
    int steps = max(abs(y - ty), abs(x - tx)) / 2;

    cout << steps << endl;

    return 0;
}
