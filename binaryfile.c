#include <stdio.h>
#include <string.h>
#include<conio.h>

struct Student {
    int id;
    char name[50];
    char grade[3];
};

int main() {
    FILE *file;
    struct Student students[2] = {
        {1, "Alice", "A"},
        {2, "Bob", "B"}
    };
    struct Student newStudent;
    int i;

    file = fopen("students.dat", "wb");

    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), 2, file);
    fclose(file);

    file = fopen("students.dat", "rb");

    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("Contents of the binary file:\n");
    while (fread(&newStudent, sizeof(struct Student), 1, file)) {
        printf("ID: %d\n", newStudent.id);
        printf("Name: %s\n", newStudent.name);
        printf("Grade: %s\n\n", newStudent.grade);
    }
    fclose(file);

    printf("Enter a new student record to append:\n");
    printf("Enter ID: ");
    scanf("%d", &newStudent.id);
    getchar();  // Consume the newline character
    printf("Enter Name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0;  // Remove newline character
    printf("Enter Grade: ");
    fgets(newStudent.grade, sizeof(newStudent.grade), stdin);
    newStudent.grade[strcspn(newStudent.grade, "\n")] = 0;  // Remove newline character

    file = fopen("students.dat", "ab");

    if (file == NULL) {
        printf("Unable to open file for appending.\n");
        return 1;
    }

    fwrite(&newStudent, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("students.dat", "rb");

    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("\nAll student records after appending the new one:\n");
    while (fread(&newStudent, sizeof(struct Student), 1, file)) {
        printf("ID: %d\n", newStudent.id);
        printf("Name: %s\n", newStudent.name);
        printf("Grade: %s\n\n", newStudent.grade);
    }
    fclose(file);
getch();
    return 0;
}
