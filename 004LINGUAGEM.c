 /*         * * * * * * *
            * QUESTÃO 4 *
            * * * * * * *
*/

#include <stdio.h>

float potencia(float base, float expoente){
    if (expoente == 0){
        return 1;
    }
    else{
        return (base * potencia(base, expoente-1));
    }
}


