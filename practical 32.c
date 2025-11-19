#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024

int is_alphanumeric(char ch) {
    return (ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9');
}
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
int main() {
    FILE *file = fopen("Demo.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }
    printf("original file content: \n");
    int ch;
    while((ch=fgetc(file)) != EOF)
    putchar(ch);
    rewind(file);
    printf("\n");

    printf("reversed original file:\n");

    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, file)) {
        int len = strlen(line);
        char *word_start = NULL;
        for (int i = 0; i <= len; i++) {
            if (is_alphanumeric(line[i])) {
                if (word_start == NULL) {
                    word_start = &line[i];
                }
            } else {
                if (word_start != NULL) {
                    reverseWord(word_start, &line[i - 1]);
                    word_start = NULL;
                }
            }
        }

        printf("%s", line);
    }
    fclose(file);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int marks, n, i;

    // Writing marks to file
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

    // Reading marks from file
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

