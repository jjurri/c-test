#include <stdio.h>
#define N 10

void print_array(int A[])
{
     for(int i = 0; i < N; ++i)
        printf("%3d ", A[i]);
     printf("\n");
}

int main(int argc, char* argv[])
{
    int A[N] = {0, 10, 20, 30, 40,
                50, 60, 70, 80, 90};
    print_array(A);

    int tmp = A[N-1];
    for(int i = N-1; i > 0; --i)
        A[i] = A[i-1];
    A[0] = tmp;
    print_array(A);

    for(int i = 0; i < N/2; ++i)
    {
        int tmp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = tmp;
        //print_array(A);
    }

    print_array(A);

    return 0;
}
