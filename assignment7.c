#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);
 
        struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks for 3 subjects:\n");
        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3;
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);

        printf("Marks: ");
        for(j = 0; j < 3; j++) {
            printf("%.2f ", s[i].marks[j]);
        }

        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}