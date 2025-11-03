#include<stdio.h>
#include<stdbool.h>
bool ChkEqual(int iNo2,int iNo1)
{
    if(iNo2==iNo1)
    {
        return true;
    }
    else
    {
         return false;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    printf("please enter two numbers:");
    scanf("%d %d",&iValue2,&iValue1);
    bRet=ChkEqual(iValue2,iValue1);
    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
     printf("Not Equal");
    }

    return 0;
}