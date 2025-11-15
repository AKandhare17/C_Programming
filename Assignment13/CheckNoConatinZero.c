#include<stdio.h>
#include<stdbool.h>
//Time Complexity:O(N)

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
     if(iNo<0)
    {
        iNo=-iNo;
    }

    int iMod=0;
    while(iNo!=0)
    {
        iMod=iNo%10;
        iNo=iNo/10;
        if(iMod==0)
        {
            return 1;
            break;
        }
       
     }

}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(TRUE==bRet)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("It Does not contain Zero");
    }

    return 0;
}