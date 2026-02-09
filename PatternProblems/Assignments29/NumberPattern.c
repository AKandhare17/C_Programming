#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0,iNocnt=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {

        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
             iNocnt++;
             printf("%d\t",iNocnt);
             if(iNocnt>=9)
             {
                iNocnt=0;
             }

            

            
        
        
        }
        printf("\n");

          
        
    }

}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter No of Rows : and Columns:");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}