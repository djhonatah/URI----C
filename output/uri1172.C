#include <stdio.h>

int main(){
   int vet[10];
   int i;
   for (i=0;i<10;i++){
    scanf("%d",&vet[i]);
    if (vet[i] < 1){
        vet[i] = 1;
    }
    printf("X [%d] = %d\n",i,vet[i]);
   }
}