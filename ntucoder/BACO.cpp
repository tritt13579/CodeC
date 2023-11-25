#include <iostream>
#include <cmath>

int main()
{
    int Xd, Xc, Td, Tc;
    std::cout << "Nhap vao vi tri cua quan xe (Xd Xc): ";
    std::cin >> Xd >> Xc;
    std::cout << "Nhap vao vi tri cua quan tuong (Td Tc): ";
    std::cin >> Td >> Tc;

    // Tính số ô mà quân tượng kiểm soát
    int diagonalSquares = 2 * std::min(7 - std::max(Xd, Xc), std::min(Xd - 1, Xc - 1)) +
                          2 * std::min(7 - std::max(Xd, 8 - Xc), std::min(Xd - 1, 8 - Xc));

    // Tính số ô mà quân xe kiểm soát
    int horizontalVerticalSquares = 14;

    // Tổng số ô mà quân tượng và quân xe kiểm soát
    int totalSquares = diagonalSquares + horizontalVerticalSquares;

    std::cout << "Tong so cac o ma quan tuong va quan xe kiem soat: " << totalSquares << std::endl;

    return 0;
}
