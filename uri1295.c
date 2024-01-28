#include <stdio.h>
#include <math.h>

float distancias(float x1, float y1, float x2, float y2);

int main(){
    // casos de teste
    int N;
    // coordenadas X e Y
   float X,Y;
   float distancia;
    do{
        scanf("%d\n",&N);
        float pontos[N][2];
        for (int i = 1;i <= N;i--){
            scanf("%d%d",&X,&Y);
               pontos[i][0] = X;
               pontos[i][1] = Y;



        

            
            if (distancia < 10000){
                printf("INFINTY");
            }
        }
    } while(N!=0);
}

float distancias(float x1, float y1, float x2, float y2){
    float result;
    result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return result;}