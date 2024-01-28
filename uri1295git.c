#include <stdio.h>
#include <math.h>

const int INF = 1000000000.0;

float distancia(float x1, float y1, float x2, float y2);

int main(){
    int N;
    float X[10000], Y[10000], d, result;
    do{
        scanf("%d", &N);
         for (int i = 0; i < N; i++) {
            scanf("%f %f", &X[i], &Y[i]);
        }
        result = INF;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                d = distancia(X[i], Y[i], X[j], Y[j]);
                if (d < result) {
                    result = d; 
                }
            }
        }
        if (result < 10000) {
            printf("%.4f\n", result);
        } else {
            printf("INFINITY\n");
        }
    }while(N!=0);
    return 0;
}

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
