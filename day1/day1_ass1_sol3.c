#include <stdio.h>
#include<stdlib.h>
void read(float*salary,int*score,int*experience) 
{
    printf("enter salary:");
    scanf("%f",&salary);
    
    printf("enter credit score:");
    scanf("%d",&score);
    
    printf("enter experience(years):");
    scanf("%d",&experience);
}
int main()
{
    float salary;
    int score;
    int experience;
    read(&salary,&score,&experience) ;
    if(salary>=30000 && score>=750 && experience>=2)
    {
        printf("Loan approved");
        
    }
    else
    {
        printf("Not eligible for loan");
    }
}

    
    
