#include<stdio.h>
//Time Complexity:O(N)
int CountFour(int iNo)
{
    int iCount=0,iMod=0;
    while(iNo!=0)
    {
    iMod=iNo%10;
    iNo=iNo/10;
    if(iMod==4)
    {
        iCount++;
    }
}
    return iCount;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet=CountFour(iValue);
    printf("%d\n",iRet);
    

    return 0;
}