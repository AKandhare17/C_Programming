#include<stdio.h>
//Time Complexity:O(N)
int MultDigits(int iNo)
{
    int iMultiply=1,iMod=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iMod=iNo%10;
        if(iMod==0)
        {
         iMod=1;
        }
         iMultiply=iMod*iMultiply;
        iNo=iNo/10;
    }
    return iMultiply;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);

    printf("%d\t",iRet);

    return 0;
}