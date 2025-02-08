#include <stdio.h>

typedef struct {
    char name[100];
    int totalTickets;
    int availableTickets;
} Show;

int addShow(Show *listings, int *numShows);
void bookTicket(Show *listings, int numShows, char *showName);
void displayShows(Show *listings, int numShows);

int main() {
    Show listings[100];
    int numShows = 0;
    int choice;
    char showName[100];

    while (1) {
        printf("1. Add a show\n");
        printf("2. Book a ticket\n");
        printf("3. List out the shows\n");
        printf("4. Exit\n");
        printf("What do you want? ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addShow(listings, &numShows);
                break;
            case 2:
                printf("Please name a show: ");
                getchar();
                fgets(showName, 100, stdin);
                showName[strcspn(showName, "\n")] = '\0';
                bookTicket(listings, numShows, showName);
                break;
            case 3:
                displayShows(listings, numShows);
                break;
            case 4:
                printf("Exiting the system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

int addShow(Show *listings, int *numShows) {
    printf("Name of the show: ");
    getchar();
    fgets(listings[*numShows].name, 100, stdin);
    listings[*numShows].name[strcspn(listings[*numShows].name, "\n")] = '\0';

    printf("Total tickets: ");
    scanf("%d", &listings[*numShows].totalTickets);

    printf("Tickets currently available: ");
    scanf("%d", &listings[*numShows].availableTickets);

    (*numShows)++;

    printf("Show added successfully!\n");
}

void bookTicket(Show *listings, int numShows, char *showName) {
    for (int i = 0; i < numShows; i++) {
        if (strcmp(listings[i].name, showName) == 0) {
            if (listings[i].availableTickets > 0) {
                listings[i].availableTickets--;
                printf("You have successfully booked a ticket!\n");
            } else {
                printf("Oops! There is no ticket left.\n");
            }
            return;
        }
    }
    printf("Show not found!\n");
}

void displayShows(Show *listings, int numShows) {
    for (int i = 0; i < numShows; i++) {
        printf("Show no %d", i+1);
        printf("Name of the show: %s\n", listings[i].name);
        printf("Total Tickets: %d\n", listings[i].totalTickets);
        printf("Tickets Currently available: %d\n", listings[i].availableTickets);
        printf("------------------------------------\n");
    }
}
