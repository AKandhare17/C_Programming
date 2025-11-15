#include<stdio.h>
#include<stdbool.h>
//Time Complexity:O(1)
bool is_Divisible_by_Five(int number)
{
    if(number%5==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int number=0;
    printf("Enter number:");
    scanf("%d",&number);

    printf("%s\n",is_Divisible_by_Five(number)?"Yes":"No");

    return 0;
}