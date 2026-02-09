#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {

        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
              
           
            if(iCnt1%2!=0)
            {
                printf("%d\t",2*iCnt2);
            }
            else
            {
               printf("%d\t",2*iCnt2-1);// 2*1=2  2-1=1
            }                            //2*2=4   4-1=3   
        }                                 //2*3=6   6-1=5
                                           //2*4=8   8-1=7 
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