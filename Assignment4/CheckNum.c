#include<stdio.h>
 void CheckNumberType(int num)
 {
    if(num<0)
    {
        printf("Negative no:%d",num);
    }
    else if(num>0)
    {
        printf("Positive no:%d",num);
    }
    else
    {
        printf("Number is :0");
    }

 }
int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;

    return 0;
}