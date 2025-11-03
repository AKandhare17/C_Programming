#include<stdio.h>
int FindMax(int iNo1,int iNo2)
{
    if(iNo1<iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}
int main()
{
    int num1,num2,result;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    result=FindMax(num1,num2);
    printf("Maximum is:%d",result);

    return 0;
}
