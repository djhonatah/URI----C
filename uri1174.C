#include <stdio.h>

int main(){
    float vet[100];
    int i;
    for (i = 0; i<3; i++){
        scanf("%f\n",&vet[i]);
        if (vet[i] <= 10){
            printf("A[%d] = %.1f\n",i,vet[i]);
        }
    }
}