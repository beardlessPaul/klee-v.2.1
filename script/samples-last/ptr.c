#include "klee/klee.h"

/*-----------------------------------------------------------------------------

This file represents example of symbolic pointer concretezation issue from the
Michael Šimáček's Master Thesis. This algorithm was initially proposed for 
implementation (Jan 19th, slide 2) and engineering effort was evaluated to Low.
Thus, the questions is, how does an alternative solution (presented on Feb 2th)
handle such sitiation?

-----------------------------------------------------------------------------*/

int *ptr(int n, int secret)
{
  int *arr = (int *)malloc(n * sizeof(int));
  if (n == 33)
    arr[n - 1] = secret;
  return arr;
}

int main()
{
  int n;
  // n = 10; // To only get assert, uncomment this line ...
  // n = 33; // Or, to avoid assert and errors, uncomment this line ...
  klee_make_symbolic(&n, sizeof(n), "n"); // ... and comment this one instead
  int secret;
  klee_make_symbolic(&secret, sizeof(secret), "secret");
  int *arr;
  arr = ptr(n, secret);
  klee_assert(arr[n - 1] == secret);
  free(arr);
  return 0;
}
