#include<stdio.h>
void Pattern(int iRow ,int iCol)//pending
{
    int iCnt1=0,iCnt2=0,temp=iCol,iNo=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1,iNo=1;iCnt2<=iCol;iCnt2++)
        {
            if(iCnt2==1)
            {
                printf("1\t");
            }
            else if(iCnt2==iCol)
            {
                  printf("%d\t",temp);
            }
            else if(iCnt1==1||iCnt1==iRow)
            {
                 iNo++;
                printf("%d\t",iNo);
            }
            else if(iCnt1==iCnt2)
            {
                iNo++;
                printf("%d\t",iNo);

            }
            else
            {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
}
int main()
{
   int iValue1=0,iValue2=0;
   printf("Enter Rows : And Columns:");
   scanf("%d%d",&iValue1,&iValue2);
   Pattern(iValue1,iValue2);
    return 0;
}