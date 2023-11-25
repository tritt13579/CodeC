#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> positions(n + 1, 0); // Mảng lưu vị trí của từng đĩa nhạc, khởi tạo giá trị mặc định là 0
    vector<int> order;               // Vector lưu thứ tự mới của các đĩa nhạc

    for (int i = 0; i < m; i++)
    {
        int ai;
        cin >> ai;

        // Xóa đĩa nhạc khỏi vị trí hiện tại (nếu có)
        if (positions[ai] != 0)
            order.erase(order.begin() + positions[ai] - 1);

        // Thêm đĩa nhạc vào đầu vector (đỉnh ngăn xếp)
        order.insert(order.begin(), ai);

        // Cập nhật vị trí mới của đĩa nhạc
        positions[ai] = 1;
    }

    // Xuất thứ tự mới của các đĩa nhạc
    for (int i = 0; i < order.size(); i++)
        cout << order[i] << " ";

    return 0;
}
