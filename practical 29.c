#include <stdio.h>
#include <string.h>
#define MAX_TEAMS 100
struct Coach {
    char name[50];
    int age;
    int experience;
};
struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};
void addTeam(struct Team teams[], int *count);
void searchTeam(struct Team teams[], int count);
void displayTeams(struct Team teams[], int count);

int main() {
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;

    do {
        printf("\n--- CHARUSAT Sports Team Management ---\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addTeam(teams, &teamCount);
                break;
            case 2:
                searchTeam(teams, teamCount);
                break;
            case 3:
                displayTeams(teams, teamCount);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
void addTeam(struct Team teams[], int *count) {
    if (*count >= MAX_TEAMS) {
        printf("Team limit reached.\n");
        return;
    }
    printf("Enter team name: ");
    fgets(teams[*count].teamName, sizeof(teams[*count].teamName), stdin);
    teams[*count].teamName[strcspn(teams[*count].teamName, "\n")] = '\0';

    printf("Enter sport type: ");
    fgets(teams[*count].sportType, sizeof(teams[*count].sportType), stdin);
    teams[*count].sportType[strcspn(teams[*count].sportType, "\n")] = '\0';

    printf("Enter coach name: ");
    fgets(teams[*count].coach.name, sizeof(teams[*count].coach.name), stdin);
    teams[*count].coach.name[strcspn(teams[*count].coach.name, "\n")] = '\0';

    printf("Enter coach age: ");
    scanf("%d", &teams[*count].coach.age);

    printf("Enter coach experience (years): ");
    scanf("%d", &teams[*count].coach.experience);
    getchar();

    (*count)++;
    printf("Team added successfully!\n");
}
void searchTeam(struct Team teams[], int count) {
    char searchName[50];
    int found = 0;

    printf("Enter team name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\nTeam Found:\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Team not found.\n");
    }
}
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams to display.\n");
        return;
    }

    printf("\n--- All Teams ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}
