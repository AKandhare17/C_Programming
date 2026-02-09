#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt=0,iCnt1=0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(iCnt1=1;iCnt1<=iCol;iCnt1++)
        {
            if(iCnt1%2==0)
            {
                printf("#\t");
            }
            else{
            printf("*\t");
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue=0,iValue1=0;
    printf("Enter No Of rows: and columns:");
    scanf("%d%d",&iValue1,&iValue);
    Pattern(iValue1,iValue);

    return 0;
}