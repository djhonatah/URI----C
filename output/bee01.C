#include <stdio.h>

int main()
{
    int N,quant,result,i;
    int c =0,s=0,r=0;
    char carac;
    scanf("%d",&N);
    for (i =0;i<=N;N){
        scanf("%d %c",&quant,&carac);
        switch (carac)
        {
            case 'C':
                c += quant;
                break;
            
            case 'S':
                s += quant;
                break;
            
            case 'R':
                r += quant;
                break;


        }
    }
    result = c+s+r;
    printf("Total: %d cobaias \n",result);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %d.2f\n",c/result);
    printf("Percentual de ratos: %d.2f\n",r/result);
    printf("Percentual de sapos: %d.2f\n",s/result);


}