#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure definition
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;   // 'M' or 'F'
    int day, month, year; // Date of Joining
    float salary;
};

// Function declarations
void countEmployees(int n);
void countGender(struct EMPLOYEE e[], int n);
void salaryAbove10k(struct EMPLOYEE e[], int n);
void findAsstManager(struct EMPLOYEE e[], int n);

int main() {
    struct EMPLOYEE emp[MAX];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &emp[i].day, &emp[i].month, &emp[i].year);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    countEmployees(n);
    countGender(emp, n);
    salaryAbove10k(emp, n);
    findAsstManager(emp, n);

    return 0;
}

// a) Total number of employees
void countEmployees(int n) {
    printf("\nTotal number of employees: %d\n", n);
}

// b) Count male and female employees
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male employees: %d\n", male);
    printf("Female employees: %d\n", female);
}

// c) Employees with salary > 10000
void salaryAbove10k(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with salary > 10000:\n");

    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s (%s) - %.2f\n", e[i].name, e[i].designation, e[i].salary);
        }
    }
}

// d) Employees with designation "Asst Manager"
void findAsstManager(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s - Salary: %.2f\n", e[i].name, e[i].salary);
        }
    }
}