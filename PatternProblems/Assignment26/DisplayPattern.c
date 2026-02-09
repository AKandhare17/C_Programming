#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt;
    char var='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",var);
        var++;
    }

}
int main()
{
int iValue=0;
printf("Enter No of elements:\n");
scanf("%d",&iValue);
 Pattern(iValue);
    return 0;
}