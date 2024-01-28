#include <stdio.h>

#define MATRIZ 9

int main(){
    int jogo[MATRIZ][MATRIZ];
    int num;

    scanf("%d",&num);
    //Determina o número de MATRIZES 9X9 irá fazer
    for(int i = 0; i < num; i++){

        //Ler todos os números da MATRIZ 9X9
        for(int linha = 0; linha < MATRIZ; linha++){
            for(int coluna = 0; coluna < MATRIZ; coluna++){
                scanf("%d\n",jogo[linha][coluna]);
            }
        }
        
        //Verificações
        int sequencia[] = {1,2,3,4,5,6,7,8,9};
        for(int i = 0; i < MATRIZ; i++){
            for(int j = 0; j < MATRIZ; j++){
                if(jogo[i][j] == sequencia){
                    int temp = MATRIZ/3;
                    if (jogo[temp][temp] == sequencia){
                        printf("Instancia %d\n",num);
                        printf("SIM \n");
                    }
                else{
                    printf("Instancia %d\n",num);
                    printf("NAO \n");
                    }
                }
                else{
                    printf("Instancia %d\n",num);
                    printf("NAO \n");
                }
            }
        }
    }
}

