#include <stdio.h>

int main ()
{
  int i;
  double vet[100];
  double num;
  scanf("%lf", &num);
  vet[0] = num;
  for (i = 1; i < 100; i++)
  {
    num = num/2;
    vet[i] = num;
  }
  for (i = 0; i < 100; i++)
  {
    printf("N[%d] = %.4lf\n",i,vet[i]);
  }
}