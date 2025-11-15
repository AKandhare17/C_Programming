#include<stdio.h>
//Time Complexity:O(N-1)
int Sum_of_Factors(int number)
{
    int iCnt=0,iSum=0;
     if(number<0)
    {
        number=-number;
    }
    for(iCnt=1;iCnt<number;iCnt++)
    {
        if(number%iCnt==0)
        {
        
        iSum=+iCnt;

        }
       
    }
     return iSum;


}
int main()
{
    int inumber=0;
    printf("Enter number:");
    scanf("%d",&inumber);
   printf("%d\n",Sum_of_Factors(inumber));


    return 0;
}