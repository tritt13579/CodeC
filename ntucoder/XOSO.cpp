#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    long long ways = 1LL * oddCount * (oddCount - 1) / 2 + 1LL * evenCount * (evenCount - 1) / 2;
    cout << ways << endl;

    return 0;
}
