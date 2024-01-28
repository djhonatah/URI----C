#include <stdio.h>

int main ()
{
  int T, vet[1000], x = 0;
  scanf("%d", &T);
  for (int i = 0; i < 1000; i++)
  {
    vet[i] = x;
    x++;
    if (x == T)
    {
      x = 0;
    }
  }
  for (int i = 0; i < 1000; i++)
  {
    printf("N[%d] = %d\n", i, vet[i]);
  }
}