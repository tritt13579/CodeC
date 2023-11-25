#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    int row = 0, col = 0;
    bool goingUp = true;

    for (int i = 1; i <= n * n; ++i)
    {
        matrix[row][col] = i;

        if (goingUp)
        {
            if (col == n - 1)
            {
                row++;
                goingUp = false;
            }
            else if (row == 0)
            {
                col++;
                goingUp = false;
            }
            else
            {
                row--;
                col++;
            }
        }
        else
        {
            if (row == n - 1)
            {
                col++;
                goingUp = true;
            }
            else if (col == 0)
            {
                row++;
                goingUp = true;
            }
            else
            {
                row++;
                col--;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j];
            if (j != n - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
