#include<stdio.h>
int MultFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo; //updator
    }
    int iCnt=0,iMul=1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMul=iCnt*iMul;
        }
    }
    return iMul;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter no:");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("Factor Multiplication: %d",iRet);


    return 0;
}