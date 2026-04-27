#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i, pass = 1;

    printf("Enter marks for 5 courses:\n");
    for(i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);

        if(marks[i] < 40) {
            pass = 0;
        }

        total += marks[i];
    }

    if(pass == 0) {
        printf("\nResult: FAIL\n");
    } else {
        percentage = total / 5;
        printf("\nResult: PASS\n");
        printf("Aggregate Percentage: %.2f%%\n", percentage);

        if(percentage >= 75) {
            printf("Grade: Distinction\n");
        }
        else if(percentage >= 60) {
            printf("Grade: First Division\n");
        }
        else if(percentage >= 50) {
            printf("Grade: Second Division\n");
        }
        else if(percentage >= 40) {
            printf("Grade: Third Division\n");
        }
    }

    return 0;
}