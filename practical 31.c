#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *summary;
    int initial_size = 100;
    int new_size;
    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter initial article summary (max %d characters):\n", initial_size - 1);
    fgets(summary, initial_size, stdin);
    printf("\nDo you want to expand the summary? (yes/no): ");
    char choice[10];
    fgets(choice, sizeof(choice), stdin);
    if (strncmp(choice, "yes", 3) == 0) {
        printf("Enter new size for the summary: ");
        scanf("%d", &new_size);
        getchar();
        char *temp = (char *)realloc(summary, new_size * sizeof(char));
        if (temp == NULL) {
            printf("Memory reallocation failed.\n");
            free(summary);
            return 1;
        }
        summary = temp;
        printf("Enter additional summary text:\n");
        fgets(summary + strlen(summary), new_size - strlen(summary), stdin);
    }
    printf("\nFinal Article Summary:\n%s\n", summary);
    free(summary);
    return 0;
}
