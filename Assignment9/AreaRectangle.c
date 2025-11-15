#include<stdio.h>
//Time Complexity:O(1)
double RectArea(float fWidth,float fHeight)
{
    return fHeight*fWidth;
}
int main()
{
   float  fValue=0.0f,fValue1=0.0f;
   double dRet=0.0;

   printf("Enter Width:");
   scanf("%f",&fValue);

    printf("Enter Height:");
   scanf("%f",&fValue1);

   dRet=RectArea(fValue,fValue1);
   printf("Area of Rectangle:%lf",dRet);



    return 0;
}