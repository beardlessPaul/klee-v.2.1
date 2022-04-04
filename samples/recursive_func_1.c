#include "klee/klee.h"

int random(int i, int j)
{
  return i + ((j - i) >> 1);
}

void exchange(unsigned int *_x, unsigned int *_y)
{
  unsigned int z;

  z = *_x;
  *_x = *_y;
  *_y = z;
}

void partition(unsigned int *a, int m, int n, int *_i, int *_j)
{
  unsigned int x;
  int f, i, j;

  f = random(m, n);
  x = a[f];
  i = m;
  j = n;
up:
  for (i = i; i <= n; i++)
    if (x < a[i])
      goto down;
  i = n;
down:
  for (j = j; j >= m; j--)
    if (a[j] < x)
      goto change;
  j = m;
change:
  if (i < j) {
    exchange(&a[i], &a[j]);
    i = i + 1;
    j = j - 1;
    goto up;
  } else
  if (i < f) {
    exchange(&a[i], &a[f]);
    i = i + 1;
  } else
  if (f < j) {
    exchange(&a[f], &a[j]);
    j = j - 1;
  }
  *_i = i;
  *_j = j;
}

void quicksort(unsigned int *a, int m, int n)
{
  int i, j;

  if (m < n) {
    partition(a, m, n, &i, &j);
    quicksort(a, m, j);
    quicksort(a, i, n);
  }
}

int main() 
{
  unsigned int a[100];
  klee_make_symbolic(a, sizeof a, "array");
  int m, n;
  klee_make_symbolic(&m, sizeof m, "m");
  klee_make_symbolic(&n, sizeof n, "n");
  klee_assume( m <50 );
  klee_assume(( n < 100 ) & ( n > m ));
  quicksort(a, m, n);
  return 0;
}
