#include <stdio.h>

int main() {
    float price1, price2, price3;

    // Input
    printf("Enter the prices of three products: ");
    scanf("%f %f %f", &price1, &price2, &price3);

    // Find the maximum using the ternary operator
    float maxPrice = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);

    // Output
    printf("The maximum number is %.2f\n", maxPrice);

    return 0;
}