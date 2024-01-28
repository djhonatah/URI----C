#include <stdio.h>

int main(){
    int tamanho;
    scanf("%d",&tamanho);
    int mat[tamanho][tamanho];
    for (int linha = 0; linha < tamanho; linha++){
        for (int coluna = 0; coluna < tamanho; coluna++){
            if (linha == coluna){
                mat[linha][coluna] = 1;
            }
            if (linha < coluna){
                mat[linha][coluna] = coluna - linha + 1;
            }
            if (linha > coluna)
				mat[linha][coluna] = linha - coluna + 1;
        }
    }
		for (int linha = 0; linha < tamanho; linha++)	{
			for (int coluna = 0; coluna < tamanho; coluna++){
				if (coluna == 0)
					printf("%3hd", mat[linha][coluna]);
				else
					printf("%3hd", mat[linha][coluna]);
			}
			printf("\n");
		}
		printf("\n");
	}
