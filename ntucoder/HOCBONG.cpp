#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, T;
    cin >> n >> T;

    vector<double> di(n);
    for (int i = 0; i < n; i++)
    {
        cin >> di[i];
    }

    sort(di.rbegin(), di.rend());

    int count = 0;
    double totalMoney = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (di[i] >= 8.0)
        {
            if (totalMoney + 500 <= T)
            {
                count++;
                totalMoney += 500;
            }
            else
            {
                break;
            }
        }
        else if (di[i] >= 7.0)
        {
            if (totalMoney + 320 <= T)
            {
                count++;
                totalMoney += 320;
            }
            else
            {
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
