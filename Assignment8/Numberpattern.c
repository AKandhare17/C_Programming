#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;//Updator
    }
    int iCnt=0,iCnt1=0;
    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt<=iNo)
        {
        printf("*\t");
        }
    }
    for (iCnt1=1;iCnt1<=iNo;iCnt1++)
    {
        
        printf("#\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);
     Display(iValue);

    return 0;
}