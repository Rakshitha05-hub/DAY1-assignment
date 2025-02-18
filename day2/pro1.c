#include <stdio.h>
void inputMarks(int *marks,int n)
{
  printf("enter marks:");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&marks[i]);
  }
}
  float calculateAverage(int *marks,int n)
  {
      float average;
      int sum=0;
      for(int i=0;i<n;i++)
      {
          sum += marks[i];
      }
      average =(float)sum/(float)n;
      return average;
  }
  int main()
  {
      int marks[]={30,30,30};
      float average = calculateAverage(marks,3);
      printf("Average marks:%.2f",average);
      return 0;
  }

