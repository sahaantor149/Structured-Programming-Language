#include <stdio.h>
#define MAX 100

struct Patient {
    char name[50];
    int age;
    char gender;
    int ID;
    char condition[100];
};

void addPatient(struct Patient patients[], int *count);
void searchPatient (struct Patient patients[], int count);
void updatePatient (struct Patient patients[], int count);
void viewPatient (struct Patient patients[], int count);

int main() {
    struct Patient patients[MAX];
    int patientCount = 0, choice;

    do {
        printf("\nHospital Patient Management System:\n");
        printf("1. Add new Patient\n");
        printf("2. Search for a patient by ID\n");
        printf("3. Update a patient's condition\n");
        printf("4. Display all patients\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addPatient(patients, &patientCount);
                break;
            case 2:
                searchPatient(patients, patientCount);
                break;
            case 3:
                updatePatient(patients, patientCount);
                break;
            case 4:
                viewPatient (patients, patientCount);
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again!\n");
        }
    } while (choice != 5);

    return 0;
}

void addPatient(struct Patient patients[], int *count) {
    if (*count >= MAX) {
        printf("Database is full. Cannot add more patients.\n");
        return;
    }

    struct Patient p;

    printf("\nEnter patient name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);
    getchar();

    printf("Enter gender (M/F): ");
    scanf(" %c", &p.gender);
    getchar();

    printf("Enter ID: ");
    scanf("%d", &p.ID);
    getchar();

    printf("Enter condition: ");
    scanf(" %[^\n]", p.condition);

    patients[*count] = p;
    (*count)++;
    printf("\nPatient added successfully.\n");
}

void searchPatient (struct Patient patients[], int count) {
    int ID, found = 0;

    printf("\nEnter patient ID to search: ");
    scanf("%d", &ID);

    for (int i = 0; i < count; i++) {
        if (patients[i].ID == ID) {
            printf("\nPatient Records:\n");
            printf("\nID: %d, Name: %s, Age: %d, Gender: %c, Condition: %s\n", patients[i].ID, patients[i].name, patients[i].age, patients[i].gender, patients[i].condition);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nPatient with ID %d not found.\n", ID);
    }
}

void updatePatient (struct Patient patients[], int count) {
    int ID, found = 0;

    printf("\nEnter patient ID to update: ");
    scanf("%d", &ID);

    for (int i = 0; i < count; i++) {
        if (patients[i].ID == ID) {
            printf("Enter new condition: ");
            scanf(" %[^\n]", patients[i].condition);

            printf("\n Condition updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Patient with ID %d not found.\n", ID);
    }
}

void viewPatient (struct Patient patients[], int count) {
    if (count == 0) {
        printf("\nNo patients to display.\n");
        return;
    }

    printf("\nPatient Records: \n");

    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, Gender: %c, Condition: %s\n", patients[i].ID, patients[i].name, patients[i].age, patients[i].gender, patients[i].condition);
    }
}
