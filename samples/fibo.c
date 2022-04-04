#include "klee/klee.h"

int fibo(int n)
{
    if (n < 1)
    {
        return -1;
    }

    if (n == 1)
    {
        return 0;
    }
    
    if (n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    klee_make_symbolic(&n, sizeof(n), "n");
    int result = fibo(n);
    return 0;
}