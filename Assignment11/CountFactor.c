#include<stdio.h>
//Time Complexity:O(N)
int Count_Factors(int number)
{
    int iCnt=0,iCount=0;
     if(number<0)
    {
        number=-number;
    }
    for(iCnt=1;iCnt<number;iCnt++)
    {
        if(number%iCnt==0)
        {
        
        iCount++;
        }
    }
   return iCount;

}
int main()
{
    int inumber=0;
    printf("Enter number:");
    scanf("%d",&inumber);
   printf("%d\n",Count_Factors(inumber));


    return 0;
}