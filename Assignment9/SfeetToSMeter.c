#include<stdio.h>
//Time Complexity:O(1)
double SquareMeter(int iValue)
{
    return iValue*0.0929;

}
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter Area(in Sqaure feet):");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("%d Square Feet = %lf Square Meters",iValue,dRet);


    return 0;
}