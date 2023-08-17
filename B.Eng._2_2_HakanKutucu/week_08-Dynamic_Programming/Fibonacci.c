#include <stdio.h>
#include <stdlib.h>

int *memo;

int fib(int n);
int len(int arr[]);


int main() {
    int n=0, i;

    printf("n = "); scanf("%d",&n);
    while(n != -1) {
        memo = (int *)calloc(n, sizeof(int));

        if (n > 2) {
            memo[0] = 1;
            memo[1] = 1;
        }
        
        printf(" -- %d'th number: %d\n", n, fib(n));

        for (i=0; i<n; i++)             // testing row
            printf("%d ",memo[i]);      // testing row
        printf("\n\n");                 // testing row

        printf("n = "); scanf("%d",&n);
    }

    return 0;
}

// int len(int Array[]) {
//     return sizeof(Array) / sizeof(int);
// }

int fib(int n) {
    int f;

    if (n <= 2)
        f = 1;
    else if (memo[n-1] != 0) {
        printf("*%d* - ", memo[n-1]);  // testing row
        return memo[n-1]; }
    else
        f = fib(n-1) + fib(n-2);

    memo[n-1] = f;
    return f;
}
