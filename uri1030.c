#include<stdio.h>

int josephus(int quant,int tam_salto)
{
      if(quant == 1){
        return 1;}
      else{
        return (josephus(quant-1,tam_salto)+tam_salto-1) % quant+1;}
}

int main()
{
      int test,quant,tam_salto,i;
      while(scanf("%d",&test) == 1){
            for(i = 1; i <= test; i++){
                  scanf("%d %d",&quant,&tam_salto);
                  int result = josephus(quant,tam_salto);
                  printf("Case %d: %d\n",i,result);
            }
      }
      return 0;
}

