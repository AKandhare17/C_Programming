#include<stdio.h>
void Pattern(int iNo)
{
    
    int iCnt;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("\t#\t%d\t*\t",iCnt);
        
    }
}
int main()
{
    int iValue=0;
    printf("Enter No of Elements:");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}