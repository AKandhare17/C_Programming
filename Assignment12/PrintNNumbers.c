#include<stdio.h>
//Time Complexity:O(N)
void print_numbers(int limit)
{
    int i=0;
    for(i=1;i<=limit;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
int iLimit=0;
printf("Enter number:");
scanf("%d",&iLimit);
print_numbers(iLimit);


    return 0;
}