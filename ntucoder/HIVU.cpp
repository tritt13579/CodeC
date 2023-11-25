#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính bình phương của một số nguyên
int square(int x)
{
    return x * x;
}

// Hàm kiểm tra xem 4 điểm có tạo thành hình vuông hay không
bool isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int d2 = square(x2 - x1) + square(y2 - y1);
    int d3 = square(x3 - x1) + square(y3 - y1);
    int d4 = square(x4 - x1) + square(y4 - y1);

    if (d2 == 0 || d3 == 0 || d4 == 0)
    {
        return false;
    }

    if (d2 == d3 && 2 * d2 == d4 && 2 * square(x3 - x2) == d4)
    {
        return true;
    }
    if (d3 == d4 && 2 * d3 == d2 && 2 * square(x4 - x2) == d2)
    {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3 && 2 * square(y3 - y2) == d3)
    {
        return true;
    }

    return false;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if (isSquare(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
