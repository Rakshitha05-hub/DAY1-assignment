#include <stdio.h>
#define MAX_VEHICLES 100

int main() 
{
    int n;
    char car = 'C';  
    char bike = 'B';  
    char truck = 'T'; 
    char type[MAX_VEHICLES];
    float total_price = 0.0;

    printf("Enter number of vehicles (max %d): ", MAX_VEHICLES);
    scanf("%d", &n);

    printf("Enter vehicle types (C for car, B for bike, T for truck):\n");
    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &type[i]); 
    }

    for(int i = 0; i < n; i++)
    {
        if(type[i] == car)
        {
            total_price += 50;
        }
        else if(type[i] == bike)
        {
            total_price += 20;
        }
        else if(type[i] == truck)
        {
            total_price += 100;
        }
       
    }

    printf("Total toll collection: %.2f\n", total_price);

    return 0;
}
