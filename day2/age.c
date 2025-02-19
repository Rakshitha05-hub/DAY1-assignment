void displayAges(short int *ages,int size,int index)
{
   if(index==size)
   {
    return;
   }
   printf("age %d:%d\n",index+1, ages[index]);
   displayAges(ages, size, index + 1);
}
int main() {
    short int ages[5]={45,42,14,20,70};
    int size;
    int index;
    displayAges(ages,5,0);
    return 0;
}
