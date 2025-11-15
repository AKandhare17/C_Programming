#include<stdio.h>
//Time Complexity:O(N)
int sum_natural_numbers(int iLimit)
{
    if(iLimit<0)
    {
        iLimit=-iLimit;
    }
    int i=0,iSum=0;
    for(i=1;i<=iLimit;i++)
    {
       iSum=i+iSum;
    }
    return iSum;
}
int main()
{
    int iLimit=0;
    printf("Enter number:");
    scanf("%d",&iLimit);
    printf("Sum of Natural No's:%d",sum_natural_numbers(iLimit));

    return 0;

}