#include <stdio.h>
#include<conio.h>
int main() {
    FILE *file;
    char text[100];
    int choice;

    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    printf("Enter some text to write to the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(text, sizeof(text), file)) {
        printf("%s", text);
    }

    fclose(file);

    printf("\nDo you want to append more text to the file? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        file = fopen("example.txt", "a");

        if (file == NULL) {
            printf("Unable to open file for appending.\n");
            return 1;
        }

        printf("Enter more text to append to the file: ");
        fgets(text, sizeof(text), stdin);

        fprintf(file, "%s", text);

        fclose(file);

        file = fopen("example.txt", "r");

        if (file == NULL) {
            printf("Unable to open file for reading.\n");
            return 1;
        }

        printf("\nUpdated contents of the file:\n");
        while (fgets(text, sizeof(text), file)) {
            printf("%s", text);
        }

        fclose(file);
    }

getch();
    return 0;
}
