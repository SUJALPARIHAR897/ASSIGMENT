#include <stdio.h>
struct Product {
    char name[50];
    float discount;
};
void suggestProducts(struct Product products[], int n, float minDiscount, float maxDiscount) {
    printf("Suggested Products:\n");

    for (int i = 0; i < n; i++) {
        if (products[i].discount >= minDiscount && products[i].discount <= maxDiscount) {
            printf("%s (Discount: %.2f%%)\n", products[i].name, products[i].discount);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct Product products[n];
    for (int i = 0; i < n; i++) {
        printf("Enter product name for product %d: ", i + 1);
        scanf("%s", products[i].name);
        printf("Enter discount for product %d: ", i + 1);
        scanf("%f", &products[i].discount);
    }

    float minDiscount, maxDiscount;
    printf("Enter Mr. Ravi's specified minimum discount: ");
    scanf("%f", &minDiscount);
    printf("Enter Mr. Ravi's specified maximum discount: ");
    scanf("%f", &maxDiscount);
    suggestProducts(products, n, minDiscount, maxDiscount);

    return 0;
}
