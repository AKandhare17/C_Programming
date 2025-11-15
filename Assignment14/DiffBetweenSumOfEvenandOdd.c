#include<stdio.h>
//Time Complexity:O(N)
int CountDiff(int iNo)
{
    int ievenCnt=0,ioddCnt=0,iMod=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iMod=iNo%10;
        iNo=iNo/10;
        if(iMod%2==0)
        {
            ievenCnt=iMod+ievenCnt;
        }
        else
        {
             ioddCnt=iMod+ioddCnt;
        }
     }
     return (ievenCnt-ioddCnt);
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}