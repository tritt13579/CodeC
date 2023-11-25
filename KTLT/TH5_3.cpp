#include <iostream>
using namespace std;

#define MAX 100
#define SWAP(a, b, c) (c = a, a = b, b = c)

float v[] = {4, 7, 10, 2};
float w[] = {5, 3, 6, 4};
float p[MAX], T, M = 9;
int x[MAX], n = 4;

void init()
{
    T = M;
    for (int i = 0; i < n; i++)
        p[i] = v[i] / w[i];
    float temp;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (p[i] < p[j])
            {
                SWAP(p[i], p[j], temp);
                SWAP(v[i], v[j], temp);
                SWAP(w[i], w[j], temp);
            }
}

void Print()
{
    printf("Trong luong tui dung do vat: %.1f\n", M - T);
    T = 0;
    float k = 0;
    for (int i = 0; i < n; i++)
        if (x != 0)
        {
            printf("x:%d v:%.2f| w:%.2f\t", x[i], v[i], w[i]);
            T += x[i] * v[i];
            k += x[i] * w[i];
        }
    printf("\nGia tri lon nhat la %.1f voi tong trong luong la %.1f\n", T, k);
}

void Greedy()
{
    int i = 0;
    while (T > 0 && i < n)
    {
        if (T >= w[i])
        {
            x[i]++;
            T -= w[i];
        }
        else
            i++;
    }
}

int main()
{
    init();
    Greedy();
    Print();

    return 0;
}