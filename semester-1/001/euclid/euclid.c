#include <stdio.h>

int main()
{
    int a, b = 32;
    a = 56;
    printf("%d", ggT(a, b));

    return 42;
}

int ggT(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;

}

