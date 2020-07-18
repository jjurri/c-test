#include <stdint.h>

int main(int argc, char* argv[])
{
    int x = 256;

    x+= 256; // 512
    x-= 256; // 256
    x*= 256; // 512
    x/= 256; // 64
    printf("x = %d\n", x);

    return 0;
}

