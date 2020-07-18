#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 10;
    int *pi = &i;
    int *pi = &pi;
    int *pppi = &ppi;
    printf("%d\n", i);

    return 0;
}
