#include "klee/klee.h"

unsigned int f(unsigned char char_variable) 
{
   unsigned char x = 0;
   for (unsigned char i = 0; i < char_variable; i++) 
       x++;
   return x;
}

int main()
{
   unsigned char* char_pointer;
   klee_make_symbolic(&char_pointer, sizeof(unsigned char*), "char_pointer");
   unsigned char char_variable = (*char_pointer);
   f(char_variable);
   return 0;	
}
