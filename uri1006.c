#include <stdio.h>

int main(){
    double A,B,C,media;
    scanf("%lf\n",&A);
    scanf("%lf\n",&B);
    scanf("%lf\n",&C);
    media = ((A * 2) + (B * 3) + (C * 5)) / (2+3+5);
    printf("MEDIA = %.1lf\n",media);
}