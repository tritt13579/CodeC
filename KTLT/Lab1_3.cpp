#include <stdio.h>
#define Max(x, y) (x) > (y) ? (x) : (y)

#define Swap(a, b) \
    {              \
        a = a + b; \
        b = a - b; \
        a = a - b; \
    }
#define Swap3(a, b) (a = a + b, b = a - b, a = a - b)
#define Swap1(a, b, t) \
    {                  \
        t = a;         \
        a = b;         \
        b = t;         \
    }
#define Swap2(a, b) \
    {               \
        int t = a;  \
        a = b;      \
        b = t;      \
    }

int main()
{
    int a = 5, b = 7, c = 8, d = 11;
    float e = 8.5, f = 11;
    printf("Max: %d\n", Max(Max(a, b), Max(c, d)));
    // cau b
    Swap2(a, b);
    printf("Swap:%d  %d", a, b);
}
