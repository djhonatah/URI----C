#include <stdio.h>
#include <stdlib.h>
/*
0 1 2 3 4 5 6 
0 1 1 2 3 5 ( N - 1) + (N - 2)
            ( 6 - 1) + (6 - 2)
*/
int calls = 0;
int fib(int n)
{
    calls++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int num, test,result;
    scanf("%d", &test);
    while (test--) {
        scanf("%d", &num);
        result = fib(num);
        printf("fib(%d) = %d calls = %d\n", num, calls - 1, result);
        calls = 0;
    }
    return 0;
}