#include<stdio.h>
//Time Complexity:O(1)
double FhToCs(float fTemp)
{
    double dTempRet=0.0;
   dTempRet= (fTemp-32)*5/9;
   return dTempRet;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fValue);
    dRet=FhToCs(fValue);
    printf(" %f Fahrenheit to %lf Celsius",fValue,dRet);

    return 0;
}