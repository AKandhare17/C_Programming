#include<stdio.h>
void Pattern(int iNo)
{
    
    int iCnt;
    
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
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