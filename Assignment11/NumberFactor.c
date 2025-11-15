#include<stdio.h>
//Time Complexity:O(N-1)
void print_Factors(int number)
{
    int iCnt=0;
    if(number<0)
    {
        number=-number;
    }
    for(iCnt=1;iCnt<number;iCnt++)
    {
        if(number%iCnt==0)
        {
        printf("%d \t",iCnt);
        }
    }


}
int main()
{
    int inumber=0;
    printf("Enter number:");
    scanf("%d",&inumber);
    print_Factors(inumber);


    return 0;
}