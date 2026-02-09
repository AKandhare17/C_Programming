#include<stdio.h>
void Pattern(int iNo)
{
    
    int iCnt;
    int Var=0;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
        printf("%d\t",iCnt*2);
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