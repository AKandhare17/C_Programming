#include<stdio.h>
//Time Complexity:O(N)
void reverseDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iRev=0;
    while(iNo!=0)
    {
        iRev=iNo%10;
        iNo=iNo/10;
        printf("%d\n",iRev);
     }

}
int main()
{
    int iDigit=0,iRet=0;
    printf("Enter a digit :");
    scanf("%d",&iDigit);

    reverseDigit(iDigit);
    

    

    return 0;
}