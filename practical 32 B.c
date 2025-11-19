#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int marks, n, i;
    fp = fopen("marks.dat", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);
        putw(marks, fp);
        }
    fclose(fp);
    fp = fopen("marks.dat", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    printf("\nStored marks:\n");
    for (i = 0; i < n; i++) {
        marks = getw(fp);
        printf("Student %d: %d\n", i + 1, marks);
    }

    fclose(fp);
    return 0;
}
