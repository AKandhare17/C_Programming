#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int iLength)
{
    int iCnt=0,ievenSum=0,ioddSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
         if(Arr[iCnt]%2==0)
         {
            ievenSum=ievenSum+Arr[iCnt];
         }
         else
         {
              ioddSum=ioddSum+Arr[iCnt];
         }

    }
    return ievenSum-ioddSum;


}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int*p=NULL;
    printf("Enter Number of Elemets:");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation Unsucessfull\n");
        return -1;

    }
    printf("Enter %d Elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Elemnt %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Diffrence(p,iSize);
    printf("Result is:%d",iRet);
    free(p);
return 0;
}