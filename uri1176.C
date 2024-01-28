#include <stdio.h>

int main ()
{
  int test, num, termo_0 = 0, termo_1 = 1;
  long long int fib = 0;
  scanf("%d", &test);
  for (int i = 0; i < test; i++)
  {
    scanf("%d", &num);
    if (num == 0)
    {
      printf("Fib(%d) = 0\n", num);
    }
    else
    {
      for (int j = 0; j < num; j++){
        termo_0 = termo_1;
        termo_1 = fib;
        fib = termo_0 + termo_1;
      }
      printf("Fib(%d) = %lld\n", num, fib);
      termo_0 = 0;
      termo_1 = 1;
      fib = 0;
    }
  }
}