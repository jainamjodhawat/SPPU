#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phoneNumber[15];
};

void addContact(struct Contact contacts[], int *count) {
    printf("\nEnter the contact's name: ");
    fgets(contacts[*count].name, sizeof(contacts[*count].name), stdin);
    contacts[*count].name[strcspn(contacts[*count].name, "\n")] = 0;

    printf("Enter the contact's phone number: ");
    fgets(contacts[*count].phoneNumber, sizeof(contacts[*count].phoneNumber), stdin);
    contacts[*count].phoneNumber[strcspn(contacts[*count].phoneNumber, "\n")] = 0;

    (*count)++;
}

void displayContacts(struct Contact contacts[], int count) {
    if (count == 0) {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\nContact List:\n");
    for (int i = 0; i < count; i++) {
        printf("Contact %d: \n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone Number: %s\n\n", contacts[i].phoneNumber);
    }
}

void searchContact(struct Contact contacts[], int count, char searchName[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(contacts[i].name, searchName) != NULL) {
            printf("\nFound Contact:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone Number: %s\n\n", contacts[i].phoneNumber);
            found = 1;
        }
    }
    if (!found) {
        printf("\nContact not found.\n");
    }
}

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice;
    char searchName[50];

    do {
        printf("\nContact List Management\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                displayContacts(contacts, count);
                break;
            case 3:
                printf("\nEnter name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = 0;
                searchContact(contacts, count, searchName);
                break;
            case 4:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
