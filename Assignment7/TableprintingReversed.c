#include<stdio.h>
//Time Complexity:
void Table(int iNo)
{
    int iCnt=0,iTable=0;
    if(iNo<0)
    {
        iNo=-iNo;//updator
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iTable=iCnt*iNo;
        printf("%d*%d:%d\n",iNo,iCnt,iTable);
    }
}
int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
    

}