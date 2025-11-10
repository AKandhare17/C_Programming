#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt=0,iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            iFact=iCnt*iFact;
        }
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);

    printf("Even Factorial number:%d",iRet);


    return 0;
}