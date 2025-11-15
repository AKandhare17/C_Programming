#include<stdio.h>
//Time Complexity:O(N)
void RangeDisplay(int iStart,int iEnd)
{
     if(iStart>iEnd)
         {
          printf("Invalid Range");
            
         }
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0,iValue1=0;
    printf("Enter starting point:");
    scanf("%d",&iValue);
    printf("Enter ending point:");
    scanf("%d",&iValue1);

    RangeDisplay(iValue,iValue1);


    return 0;
}