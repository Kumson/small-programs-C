/*
**  s = 22...2
**  Êä³ön¸ö2 
*/
#include <stdio.h>
int main()
{
  long int s, i, n;
  
  s = 0; 
  i = 1;
  n = 5; 
  while  ( i <= n )
  {
   s = 10 * s  + 2;
   i = i + 1;
  }
  
  
  printf("result = %ld\n", s);
  return 0;
}
