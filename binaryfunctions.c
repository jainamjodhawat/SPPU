#include <stdio.h>
#include<conio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *file;
    struct Employee employees[3] = {
        {1, "Alice", 50000.0},
        {2, "Bob", 60000.0},
        {3, "Charlie", 70000.0}
    };
    struct Employee updatedEmployee;
    int recordIndex;
    long position;

    file = fopen("employees.dat", "wb");

    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    fwrite(employees, sizeof(struct Employee), 3, file);
    fclose(file);

    file = fopen("employees.dat", "rb+");

    if (file == NULL) {
        printf("Unable to open file for reading and writing.\n");
        return 1;
    }

    printf("Enter the employee ID to update salary: ");
    scanf("%d", &recordIndex);

    fseek(file, (recordIndex - 1) * sizeof(struct Employee), SEEK_SET);

    if (ftell(file) == -1) {
        printf("File access error.\n");
        fclose(file);
        return 1;
    }

    fread(&updatedEmployee, sizeof(struct Employee), 1, file);

    printf("Current information of employee %d:\n", updatedEmployee.id);
    printf("Name: %s\n", updatedEmployee.name);
    printf("Salary: %.2f\n", updatedEmployee.salary);

    printf("Enter the new salary: ");
    scanf("%f", &updatedEmployee.salary);

    fseek(file, (recordIndex - 1) * sizeof(struct Employee), SEEK_SET);

    fwrite(&updatedEmployee, sizeof(struct Employee), 1, file);

    fseek(file, 0, SEEK_SET);
    printf("\nUpdated employee records:\n");
    while (fread(&updatedEmployee, sizeof(struct Employee), 1, file)) {
        printf("ID: %d\n", updatedEmployee.id);
        printf("Name: %s\n", updatedEmployee.name);
        printf("Salary: %.2f\n\n", updatedEmployee.salary);
    }

    fclose(file);
getch();
    return 0;
}
