#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt1=0,iCnt2=0,inum=0;
    
    for(iCnt1=iNo;iCnt1>=1;iCnt1--)//loop reversing
    {
       inum=-iCnt1;//convert no to negative and copy to new variable
        printf("%d\t",inum);
    }
    for(iCnt2=0;iCnt2<=iNo;iCnt2++)
    {
        printf("%d\t",iCnt2);
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