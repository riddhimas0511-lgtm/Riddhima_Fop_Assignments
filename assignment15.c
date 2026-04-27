#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    srand(time(0));

    printf("How many random numbers do you want? ");
    scanf("%d", &n);

    printf("Generated pseudo-random numbers:\n");

    for (i = 0; i < n; i++) {
        int r = rand();   
        printf("%d\n", r);
    }

    return 0;
}