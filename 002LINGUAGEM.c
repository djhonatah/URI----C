 /*         * * * * * * *
            * QUESTÃO 2 *
            * * * * * * *
*/

#include <stdio.h>

int mdc(int num, int num1){
    int resto;
    while(num1 != 0){
        resto = num % num1;
        num = num1;
        num1 = resto;
    }
    return num;
}

//teste da função
int main()
{   
    int num1,num2;
    printf("Digite o 1 numero: \n");
    scanf("%d\n",&num1);
    printf("Digite o 2 numero: \n");
    scanf("%d\n",&num2);
    printf("O resultado do MDC eh: %d \n",mdc(num1,num2));
}