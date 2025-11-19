#include <stdio.h>
#include <stdlib.h>
void sortPrices(float *prices, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (*(prices + i) > *(prices + j)) {
                float temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
            }
        }
    }
}
int main() {
    int numItems;
    printf("Enter the number of items: ");
    if (scanf("%d", &numItems) != 1 || numItems < 0) {
        printf("Error: Invalid input for number of items.\n");
        return 1;
    }

    if (numItems == 0) {
        printf("Error: No items to sort.\n");
        return 1;
    }

    float *prices = (float *)malloc(numItems * sizeof(float));
    if (prices == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the prices of %d items:\n", numItems);
    for (int i = 0; i < numItems; i++) {
        if (scanf("%f", prices + i) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 1;
        }
    }
    sortPrices(prices, numItems);

    printf("Sorted Prices:\n");
    for (int i = 0; i < numItems; i++) {
        printf("%.2f ", *(prices + i));
    }
    printf("\n");

    free(prices);
    return 0;
}
