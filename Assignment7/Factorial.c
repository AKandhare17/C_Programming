#include<stdio.h>
//Time Complexity:
int Factorial(int iNo)
{
    int fact=1,iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo; //updator
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        fact=iCnt*fact;
    }
    return fact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of %d is: %d",iValue,iRet);

    return 0;

}
