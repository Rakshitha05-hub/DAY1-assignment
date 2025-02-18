#include <stdio.h>

float calculateBill(char wardType, int days, float *totalBeforeDiscount) {
    float total = 0.0;
    float discount = 0.0;

    if (wardType == 'G') {
        total = days * 1000;
    } else if (wardType == 'S') {
        total = days * 2000;
    } else if (wardType == 'P') {
        total = days * 5000;
    }

    *totalBeforeDiscount = total;

    if (days > 7) {
        discount = total * 0.05;
        total -= discount;
    }

    return total;
}

int main() {
    char name[50];
    char wardType;
    int days;
    float totalBeforeDiscount;

    printf("Enter Patient Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &days);

    float bill = calculateBill(wardType, days, &totalBeforeDiscount);
    float discountApplied = totalBeforeDiscount - bill;

    printf("Patient Name: %s", name);
    printf("Total Bill Before Discount: ₹%.2f\n", totalBeforeDiscount);
    printf("Discount Applied: ₹%.2f\n", discountApplied);
    printf("Final Bill Amount: ₹%.2f\n", bill);

    return 0;
}
