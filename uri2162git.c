#include <stdio.h>

int main() {
    int N, padrao = 0;
    scanf("%d", &N);
    int altura[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &altura[i]);
    }
    if (N > 2) {
        for (int i = 2; i < N; i++) {
            if ((altura[i-2] > altura[i-1] && altura[i-1] < altura[i])) {
                padrao = 1;
            } 
            else if ((altura[i-2] < altura[i-1] && altura[i-1] > altura[i]))
            {
                padrao = 1;
            }
            
            else {
                padrao = 0;
                break;
            }
        }
    } else { 
        if (altura[0] != altura[1]) 
        {padrao = 1;}
    }
    
    printf("%d\n", padrao);
}