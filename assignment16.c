#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int eCount = 0, oCount = 0;

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            even[eCount++] = arr[i];
        } else {
            odd[oCount++] = arr[i];
        }
    }

    printf("\nEven numbers:\n");
    for(i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");

    return 0;
}