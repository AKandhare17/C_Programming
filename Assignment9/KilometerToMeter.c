#include<stdio.h>
//Time Complexity:O(1)
int KMtoMeter(int iNo)
{
    return iNo*1000;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter diastance:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("%d Km is %d Meters:",iValue,iRet);

    return 0;
}