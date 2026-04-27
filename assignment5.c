#include <stdio.h>

void addMatrix(int a[3][3], int b[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int a[3][3]) {
    int found = 0;
    for (int i = 0; i < 3; i++) {
        int min_row = a[i][0];
        int col_index = 0;
        for (int j = 1; j < 3; j++) {
            if (a[i][j] < min_row) {
                min_row = a[i][j];
                col_index = j;
            }
        }
        int is_saddle = 1;
        for (int k = 0; k < 3; k++) {
            if (a[k][col_index] > min_row) {
                is_saddle = 0;
                break;
            }
        }
        if (is_saddle) {
            printf("Saddle point found: %d at index (%d, %d)\n", min_row, i, col_index);
            found = 1;
        }
    }
    if (!found) {
        printf("No saddle point exists\n");
    }
}

void inverseMatrix(int a[3][3]) {
    float det = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]) -
                a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) +
                a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    if (det == 0) {
        printf("Inverse does not exist (Determinant is 0)\n");
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            float val = ((a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3]) -
                         (a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3])) / det;
            printf("%.2f ", val);
        }
        printf("\n");
    }
}

void magicSquare(int a[3][3]) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum1 += a[i][i];
        sum2 += a[i][2 - i];
    }
    if (sum1 != sum2) {
        printf("Matrix is not a Magic Square\n");
        return;
    }
    for (int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if (rowSum != sum1 || colSum != sum1) {
            printf("Matrix is not a Magic Square\n");
            return;
        }
    }
    printf("Matrix is a Magic Square\n");
}

int main() {
    int a[3][3], b[3][3];

    printf("Enter elements of 3x3 Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 3x3 Matrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n--- 1. Addition of Matrices (A + B) ---\n");
    addMatrix(a, b);

    printf("\n--- 2. Saddle Point of Matrix A ---\n");
    saddlePoint(a);

    printf("\n--- 3. Inverse of Matrix A ---\n");
    inverseMatrix(a);

    printf("\n--- 4. Magic Square Check for Matrix A ---\n");
    magicSquare(a);

    return 0;
}


