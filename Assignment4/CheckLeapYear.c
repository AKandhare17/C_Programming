#include<stdio.h>
void CheckLeapYear(int iyear)
{
    if((iyear%4==0)&&(iyear%100!=0)||(iyear%400==0))
    {
        printf("%d is a Leap year\n",iyear);
    }
    else
    {
      printf("%d is not  Leap year\n",iyear);
    }
}
int main()
{
    int yr;
    printf("Enter Year:");
    scanf("%d",&yr);
    CheckLeapYear(yr);


    return 0;
}