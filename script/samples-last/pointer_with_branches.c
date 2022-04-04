#include "klee/klee.h"

unsigned int f(unsigned char char_variable, int n)
{
    unsigned char x = 0;
    for (unsigned char i = 0; i < char_variable; i++)
        x++;
    if (n == 1000)
        return x-1;
    if (n == 10000)
        return x-2;
    return x;
}

int main()
{
    unsigned char* char_pointer;
    klee_make_symbolic(&char_pointer, sizeof(unsigned char*), "char_pointer");
    int n;
    klee_make_symbolic(&n, sizeof(n), "n");
    unsigned char char_variable = (*char_pointer);
    f(char_variable, n);
    return 0;
}