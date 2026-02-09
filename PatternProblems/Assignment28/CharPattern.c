#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    char ch='\0';
    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        ch='A';
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            printf("%c\t",ch);
              ch++;
        }
        printf("\n");
    }



}
int main()
{
    int iValue=0,iValue1=0;
    printf("Enter No of Rows: And Columns:");
    scanf("%d%d",&iValue,&iValue1);
    Pattern(iValue,iValue1);

    return 0;
}