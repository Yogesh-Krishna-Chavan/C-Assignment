#include <stdio.h>

int main() {
    int employeeId, deptNo;
    char designationCode;

    printf("Enter Employee Id: ");
    scanf("%d", &employeeId);

    printf("Enter Department No (10, 20, 30, 40): ");
    scanf("%d", &deptNo);

    printf("Enter Designation Code (M, S, s, C): ");
    scanf(" %c", &designationCode);

    char deptName[20];
    char designation[20];

    switch (deptNo) {
        case 10:
            strcpy(deptName, "Marketing");
            break;
        case 20:
            strcpy(deptName, "Management");
            break;
        case 30:
            strcpy(deptName, "Sales");
            break;
        case 40:
            strcpy(deptName, "Designing");
            break;
        default:
            strcpy(deptName, "Unknown");
            break;
    }

    switch (designationCode) {
        case 'M':
            strcpy(designation, "Manager");
            break;
        case 'S':
            strcpy(designation, "Supervisor");
            break;
        case 's':
            strcpy(designation, "Security Officer");
            break;
        case 'C':
            strcpy(designation, "Clerk");
            break;
        default:
            strcpy(designation, "Unknown");
            break;
    }

    printf("Employee with employee id %d is working in \"%s\" department as \"%s\".\n", employeeId, deptName, designation);

    return 0;
}