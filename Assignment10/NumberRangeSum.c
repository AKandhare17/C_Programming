#include<stdio.h>
//Time Complexity:O(N)
int RangeDisplaySum(int iStart,int iEnd)
{
    int iSum=0;
     if(iStart>iEnd||iStart<0)
         {
          return iSum;
         }
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
     iSum+=iCnt;
    }
    return iSum;
}

int main()
{
    int iValue=0,iValue1=0,iRet=0;
    printf("Enter starting point:");
    scanf("%d",&iValue);
    printf("Enter ending point:");
    scanf("%d",&iValue1);
 iRet=RangeDisplaySum(iValue,iValue1);
    if(iRet==0)
    {
        printf("Invalid Range!");
    }
    else
    {
   printf("Addition of Range:%d ",iRet);
    }


    return 0;
}