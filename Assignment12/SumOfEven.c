#include<stdio.h>
//Time Complexity:O(N)
int sum_even_numbers(int iLimit)
{
    if(iLimit<0)
    {
        iLimit=-iLimit;
    }
    int i=0,iSum=0;
    for(i=1;i<=iLimit;i++)
    {
        if(i%2==0)
        {
       iSum=i+iSum;
        }
    }
    return iSum;
}
int main()
{
    int iLimit=0;
    printf("Enter number:");
    scanf("%d",&iLimit);
    printf("%d",sum_even_numbers(iLimit));

    return 0;

}