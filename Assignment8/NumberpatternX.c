#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;//Updator
    }
    int iCnt=0,iCnt1=0;            // if input:5
    for (iCnt=1;iCnt<=iNo*2;iCnt++)//first 5 iteration prints 5 * and second (5to10)iterations prints #
    {
        if(iCnt<=iNo)
        {
        printf("*\t");
        }
        else
        {
        printf("#\t");
        }
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