#include<stdio.h>

float calculateBill(char wardType, int days)
{
   float total = 0.0;
   float discount = 0.0;

    if (wardType == 'G') {
        total = days * 1000; 
    } else if (wardType == 'S') {
        total = days * 2000; 
    } else if (wardType == 'P') {
        total = days * 5000; 
    } 

    if (days > 7) {
       discount = total * 0.05; 
       total -= discount;
    }

    return total; 
}

int main() 
{
    char name[50];
    char wardType;
    int days;
    
    printf("Enter Patient Name  :\n");
    scanf("%s", name);  
    
    printf("Enter Ward Type (G/S/P):\n");
    scanf(" %c", &wardType); 
    
    printf("Enter Number of Days Admitted :\n");
    scanf("%d", &days);  

    float bill = calculateBill(wardType, days);
    if (bill >= 0) {
        printf("Final Bill Amount: ₹%.2f\n", bill);
    }

    return 0;
}
