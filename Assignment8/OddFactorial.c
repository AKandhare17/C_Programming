#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt=0,iFact=1;
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
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=OddFactorial(iValue);

    printf("Odd Factorial number:%d",iRet);


    return 0;
}