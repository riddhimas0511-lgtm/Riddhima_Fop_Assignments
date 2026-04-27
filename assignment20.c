#include <stdio.h>

void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
    printf("After swapping\nwithout pointers:\n\n");
    printf("a = %d b = %d\n", a, b);
}


void swapWithPointers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    swapWithoutPointers(x, y);

    
    swapWithPointers(&x, &y);
    printf("After swapping\nwith pointers:\n\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}