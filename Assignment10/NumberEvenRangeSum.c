#include<stdio.h>
//Time Complexity:O(N)
int RangeSumEven(int iStart,int iEnd)
{
    int iSum=0;
     if(iStart>iEnd||iStart<0||iEnd<0)
         {
          return iSum;
            
         }
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        iSum+=iCnt;
        }
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

    iRet=RangeSumEven(iValue,iValue1);

    if(iRet==0)
    {
      printf("Invalid Range!");
    }
    else
    {
    printf("Addition of Even Range:%d ",iRet);
    }


    return 0;
}