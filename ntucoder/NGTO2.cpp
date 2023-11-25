#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 10000000;

int main()
{
    vector<bool> isPrime(MAX_N, true);

    for (int i = 2; i * i < MAX_N; ++i)
        if (isPrime[i])
            for (int j = i * i; j < MAX_N; j += i)
                isPrime[j] = false;

    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i < MAX_N; ++i)
    {
        if (isPrime[i])
        {
            ++count;
            if (count == n)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
