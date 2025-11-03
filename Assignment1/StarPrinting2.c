#include<stdio.h>
void Display(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo; //Updator
    }
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }

}
int main()
{
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

    return 0;
}