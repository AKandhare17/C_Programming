#include<stdio.h>
//Time Complexity:O(1)
double CircleArea(float fRadius)
{
    double PI=3.14;
    return 2*PI*fRadius;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of Circle:%lf",dRet);


    return 0;
}