#include<stdio.h>
#include<stdbool.h>
bool checkEven(int iNo)
{
    if(iNo%2==0)
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

    printf("Enter number:");
    scanf("%d",&iValue);
    bRet=checkEven(iValue);
    if(bRet==true)
    {
        printf("%d is Even No\n",iValue);
    }
    else
    {
      printf("%d is Odd No\n",iValue);
    }

    return 0;
}