#include<stdio.h>
//Time Complexity:O(N )
int CountEven(int iNo)
{
    int iCount=0,iMod=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iMod=iNo%10;
        if(iMod%2==0)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d\t",iRet);

    return 0;
}