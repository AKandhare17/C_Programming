#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0,iNo=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {

        for(iCnt2=1,iNo=0;iCnt2<=iCol;iCnt2++)
        {
              
           
            if(iCnt1%2!=0)
            {
                printf("%d\t",iCnt2);
            }
            else
            {
                 iNo--;
               printf("%d\t",iNo);
              
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