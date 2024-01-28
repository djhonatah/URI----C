#include <stdio.h>

#define true 1
#define false 0

int main ()
{
    /*
    ​​"num_zeros" (usada para armazenar o número de zeros na primeira linha) 
    "c" (usada para ler cada número da matriz), 
    "qtsZeros_linha" (usada para contar o número de zeros em cada linha), 
    " linha" e "coluna" (usadas para percorrer a matriz), 
    "bo" (usada para controlar se a linha atual é composta apenas por zeros), 
    "ok" (usada para controlar se as condições anteriores foram satisfeitas) e 
    "qtsLinha" e "qtsColuna" (usadas para armazenar o número de linhas e sonoras da matriz).
    */
	int num_zeros = 0;
	int c, qtsZeros_linha;
	int linha, coluna;
	_Bool bo, ok = true;
	int qtsLinha, qtsColuna;

	scanf("%d %d", &qtsLinha, &qtsColuna);

	for (linha = 0; linha < qtsLinha; ++linha)
	{
		qtsZeros_linha = 0;
		bo = true;
		for (coluna = 0; coluna < qtsColuna; ++coluna)
		{
			scanf("%d", &c);
			if (c == 0 && bo)
				qtsZeros_linha++;
			else
				bo = false;
		}
		if (linha != 0)
		{
			if ((qtsZeros_linha > num_zeros || (qtsZeros_linha == num_zeros && qtsZeros_linha == qtsColuna)) && ok)
				num_zeros = qtsZeros_linha;
			else
				num_zeros = 0, ok = false;
		}
		else
			num_zeros = qtsZeros_linha;
	}
	if (num_zeros)
		printf("S\n");
	else
		printf("N\n");

}