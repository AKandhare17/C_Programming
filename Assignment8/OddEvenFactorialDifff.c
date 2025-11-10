#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0,iFact=1,iFact2=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2!=0)
        {
            iFact=iCnt*iFact;
        }
        else
        {
            iFact2=iCnt*iFact2;

        }
    }
    return iFact2-iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);

    printf("Diffrerence  of Factorial number:%d",iRet);


    return 0;
}