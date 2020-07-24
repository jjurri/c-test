#include <stdio.h>

int main(int argc, char* argv[])
{
    // int x;
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 0) break;
        printf("Number %d in hexadecimal is %X.\n", x, x);
    }

    return 0;
}
