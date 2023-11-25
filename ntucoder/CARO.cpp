#include <iostream>
#include <vector>

using namespace std;

bool checkWin(const vector<vector<char>> &board, char player, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int rowCount = 0, colCount = 0;
        for (int j = 0; j < n; ++j)
        {
            if (board[i][j] == player)
            {
                rowCount++;
                if (rowCount == 5)
                    return true;
            }
            else
                rowCount = 0;

            if (board[j][i] == player)
            {
                colCount++;
                if (colCount == 5)
                    return true;
            }
            else
                colCount = 0;
        }
    }

    for (int i = 0; i <= n - 5; ++i)
    {
        for (int j = 0; j <= n - 5; ++j)
        {
            int diagCount = 0;
            for (int k = 0; k < 5; ++k)
            {
                if (board[i + k][j + k] == player)
                {
                    diagCount++;
                    if (diagCount == 5)
                        return true;
                }
                else
                    diagCount = 0;
            }
        }
    }

    for (int i = 0; i <= n - 5; ++i)
    {
        for (int j = n - 1; j >= 4; --j)
        {
            int diagCount = 0;
            for (int k = 0; k < 5; ++k)
            {
                if (board[i + k][j - k] == player)
                {
                    diagCount++;
                    if (diagCount == 5)
                        return true;
                }
                else
                    diagCount = 0;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> board[i][j];

    if (checkWin(board, 'x', n))
        cout << "Ti wins" << endl;
    else if (checkWin(board, 'o', n))
        cout << "Teo wins" << endl;
    else
        cout << "Not yet" << endl;

    return 0;
}
