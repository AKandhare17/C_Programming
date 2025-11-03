#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt1=0;
    
    for(iCnt1=-iNo;iCnt1<=iNo;iCnt1++)//loop traversing
    {
          printf("%d\t",iCnt1);
    }
}
int main()
{
    int ivalue=0;
    printf("Enter number:");
    scanf("%d",&ivalue);
    Display(ivalue);

    return 0;
}