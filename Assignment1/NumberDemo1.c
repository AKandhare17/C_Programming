#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int i=0;
    if(iNo<0&&iFrequency<0)
    {
        iNo=-iNo;
        iFrequency=-iFrequency;//updator
                            
    }
   

    for(i=0;i<iFrequency;i++)
    {
        printf("%d\t",iNo);
    }

}

int main()
{
    int iValue=0;
    int iCount=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    printf("Enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);
     


    return 0;
}