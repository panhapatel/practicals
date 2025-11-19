#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 5
char books[MAX_BOOKS][50] = {
    "CCP",
    "Mathematic",
    "BEEE",
    "English",
    "Physics"
};
int totalBooks = MAX_BOOKS;
//  No arguments, no return value
void displayBooks() {
    printf("Available Books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }
}
//  No arguments, return value
int getTotalBooks() {
    return totalBooks;
}
//  Argument passed, no return value
void borrowBook(char* bookName) {
    int found = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i], bookName) == 0) {
            found = 1;
            printf("You have borrowed \"%s\".\n", bookName);
          for (int j = i; j < totalBooks - 1; j++) {
                strcpy(books[j], books[j + 1]);
            }
            totalBooks--;
            break;
        }
    }
    if (!found) {
        printf("Sorry, \"%s\" is not available.\n", bookName);
    }
}
//  Argument passed, return value
float calculateFine(int daysLate) {
    float finePerDay = 2.0;
    return daysLate * finePerDay;
}
int main() {
    displayBooks();

    printf("\nTotal books: %d\n", getTotalBooks());

    borrowBook("CCP");
    printf("\nAfter borrowing:\n");
    displayBooks();

    int lateDays = 4;
    float fine = calculateFine(lateDays);
    printf("\nFine for %d late days: %f\n", lateDays, fine);

    return 0;
}

