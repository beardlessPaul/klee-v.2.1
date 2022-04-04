#include "klee/klee.h"

int fact(int n)
{
    if (n < 0)
    {
        return - 1;
    }
    return n == 0 ? 1 : n * fact(n - 1);
}

int main()
{
    int n;
    klee_make_symbolic(&n, sizeof(n), "n");
    int result = fact(n);
    return 0;
}