#include <stdio.h>
int factorial(int n)
{
  if(n==1)
   {
    return 1;
   }
  else
  {
   return n*factorial(n-1);
  }
}

int main()
{
   int factorialValue = factorial(5);

   printf("%d", factorialValue);

   return 0;
}
