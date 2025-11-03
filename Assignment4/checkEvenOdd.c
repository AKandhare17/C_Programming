#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        printf("Even no:%d",iNo);
    }
    else
    {
      printf("Odd no:%d",iNo);
    }

}
int main()
{
    int number;
    printf("Enetr number:");
    scanf("%d",&number);
    CheckEvenOdd(number);
  return 0;
}