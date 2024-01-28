 /*         * * * * * * *
            * QUESTÃO 3 *
            * * * * * * *
*/

#include <stdio.h>

float potencia(float base, float expoente){
  float pot= 1;
  float contador = 0;
  while (contador != expoente) {
    pot = pot * base;
    contador++;}
    return pot;
}


int main(){
    float x;
    float y;
    scanf("%f%f",&x,&y);
    printf("%.0f",potencia(x,y));
}
