#include <stdio.h>

int main()
{
    int num,num1,soma;
    while (1){
        scanf("%d%d",num,num1);
        if (num <= 0 || num1 <=0){
            return 0;
        }
        else {
            if (num > num1){
                num1 = num;
            }
            else{
                for (num; num <= num1;num1++){
                printf("%d %d",num, num1);
                printf("Sum=%d",soma = num+num1);

            }

            }
        }
    }
}