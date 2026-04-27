#include <stdio.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char date_of_joining[15];
    float salary;
};

int totalEmployees(int n) {
    return n;
}

int main() {
    int n, i;

    printf("Enter no. of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender(M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of joining(DD/MM/YYYY): ");
        scanf("%s", emp[i].date_of_joining);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nTotal number of employees: %d\n", totalEmployees(n));

    return 0;
}