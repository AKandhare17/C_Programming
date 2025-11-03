#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt=0,iNonsum=0,iFactsum=0,iSumDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;//Updator
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactsum=iCnt+iFactsum;
        }
        else
        {
             iNonsum=iCnt+iNonsum;
        }
    }
    return iSumDiff=iFactsum-iNonsum;
     
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}