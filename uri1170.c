#include <stdio.h>

int main()
{
    int test,i,cont=0;
    float cmd;
    scanf("%d",&test);
    for (i=1;i<=test;i++){
        scanf("%f",&cmd);
        while (cmd > 1){
            cmd = cmd / 2;
            cont++;
        }
        printf("%d dias \n",cont);
        cont = 0;
      
        
    }
}