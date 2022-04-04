#include "klee/klee.h"

#define M 100000000
#define D 6 

int h = 0;

int calc_fac(unsigned int *a, int L, unsigned long n)
{
  unsigned long b, c;
  int i, l;

  a[0] = 1;
  for (i = 1; i < L; i++)
    a[i] = 0;
  l = 1;
  while (n) {
    c = 0;
    for (i = 0; i < l || c; i++) {
      b = n*a[i] + c;
      c = b/M;
      a[i] = b - c*M;
    }
    if (i > l)
      l = i;
    n--;
  }
  return l;
}

void print_digits(int n, int c, char *r)
{
  int d;

  if (c <= 0)
    return;
  print_digits(n/10, c - 1, r);
  d = n%10;
  if (h || d) {
    r += ('0' + d);
    h = 1;
  }

}

void under_test(n)
{
  unsigned int *a;
  int m, L, i;
  char * s;
  L = 0;
  if (n < 0) return;
  for (m = n; m; m = m/10)
    L++;
  L = L*n/D + 1;
  a = malloc(L*sizeof(*a));
  if (!a) return;
  L = calc_fac(a, L, n);
  for (i = L - 1; i >= 0; i--) {
    print_digits(a[i], D, s);
  }

}

int main()
{
  int n;
  klee_make_symbolic(&n, sizeof n, "n");
  klee_assume((n >= -1) & (n <= 14));
  under_test(n);
}
