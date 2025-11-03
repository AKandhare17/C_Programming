#include<stdio.h>
#define Total 100
float Percentage(int iNo,int iNo1)
{
    float percent=0.0f;
    if(iNo1==0||iNo==0)
    {
        return 0;
    }
    percent=((float)iNo1/(float)iNo)*Total;
    return percent;



}
int main()
{
    int iValue=0,iValue1=0;
    float fRet=0.0f;
    printf("enter total marks:");
    scanf("%d",&iValue1);
    printf("enter obtained marks:");
    scanf("%d",&iValue);
    fRet=Percentage(iValue1,iValue);
    printf("Percentage:%f",fRet);


    return 0;
}