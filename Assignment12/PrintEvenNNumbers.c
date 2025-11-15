#include<stdio.h>
//Time Complexity:O(N)
void print_even_numbers(int limit)
{
    int i=0;
    for(i=1;i<=limit;i++)
    {
        if(i%2==0)
        {
        printf("%d\t",i);
        }
    }
}
int main()
{
int iLimit=0;
printf("Enter number:");
scanf("%d",&iLimit);
print_even_numbers(iLimit);


    return 0;
}