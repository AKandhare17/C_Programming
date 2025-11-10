#include<stdio.h>
int DollerToINR(int iNo)
{
    int const Doller=70;
    int iRet=0;

    return iRet=Doller*iNo;


}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Amount in USD($):");
    scanf("%d",&iValue);

    iRet=DollerToINR( iValue);

    printf("\nValue in INR: %d(₹)",iRet);


    return 0;
}