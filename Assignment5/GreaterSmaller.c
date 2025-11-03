#include<stdio.h>
#include<stdbool.h>
bool ChkGreater(int iNo)
{
    int const iLimit=100;

    if(iNo<0)
    {
        iNo=-iNo;//updator
    }

    
    if(iNo>iLimit)
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
    int iValue=0;
    bool bRet=false;
    printf("please enter number:");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==true)
    {
        printf("Graeter");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}